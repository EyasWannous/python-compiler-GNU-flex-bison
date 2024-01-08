/*
 * @name astNodes.hpp
 * @description Hierachy of AST
 * @author EyasWannous
 * @example E = W + 100
 *                        |---------|
 *                        | AstNode |
 *                        |---------|
 *                             |
 *                             |
 *                      |--------------|
 *                      |    Assign    |
 *                      |--------------|
 *                          |        |
 *                         |           |
 *                        |              |
 *                    |------------|   |--------------|
 *                    |      E     |   |     Plus     |
 *                    |------------|   |--------------|
 *                                       |          |
 *                                      |            |
 *                                     |              |
 *                           |-------------|     |-------------|
 *                           |      W      |     |     100     |
 *                           |-------------|     |-------------|
 *
 */

#ifndef AST_NODE_H
#define AST_NODE_H

#include <iostream>
#include <vector>
using namespace std;
// #include <stdlib.h>

// Abstract base class for AST nodes
class AstNode
{
public:
    string name = "undefined"; // String member variable with default value
    string label = "undefined";
    virtual void add(AstNode *node) = 0;
    virtual void print() const = 0;
    virtual ~AstNode() {}
};

// Composite node for representing function declare
class FunctionNode : public AstNode
{
private:
    vector<AstNode *> next;

public:
    FunctionNode(const string &name)
    {
        this->name = name;
        this->label = "Declare Fun";
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        cout << "\t" << name << " [label=\"" << label << " : " << name << "\"]" << endl;
        // vector<AstNode *>::iterator it;
        for (const auto &item : next)
        {
            cout << "\t" << name << " -> " << item->name << ";" << endl;
            item->print();
        }
    }

    ~FunctionNode()
    {
        for (const auto &arg : next)
        {
            delete arg;
        }
    }
};

// base node for representing identifier ,will create object  from lexer
class IdentifierNode : public AstNode
{

public:
    string value = "undefined";
    IdentifierNode(string name, string label, string value)
    {
        this->name = name;
        this->label = label;
        this->value = value;
    }
    void add(AstNode * /*node*/) override
    {
        cerr << "Cannot add a child to a leaf node." << endl;
    }

    void print() const override
    {
        cout << "\t" << name << " [shape=box,label=\"" << label << ": " << value << "\"]" << endl;
    }
};

class Arg : public AstNode
{
private:
    vector<AstNode *> next;

public:
    Arg(const string &name)
    {
        this->name = name;
        this->label = "Argument";
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        cout << "\t" << name << " [label=\"" << label << "\"]" << endl;
        for (const auto &arg : next)
        {
            arg->print();
        }
    }
};

class Args : public AstNode
{
private:
    vector<AstNode *> next;

public:
    Args(const string &name)
    {
        this->name = name;
        this->label = "Arguments";
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        cout << "\t" << name << " [label=\"" << label << "\"]" << endl;

        for (const auto &arg : next)
        {
            cout << "\t" << name << " -> " << arg->name << ";" << endl;
            arg->print();
        }
    }
};

class BlockNode : public AstNode
{
private:
    vector<AstNode *> next;

public:
    BlockNode(const string &name)
    {
        this->name = name;
        this->label = "Block";
    }
    void add(AstNode *node) override
    {
        next.push_back(node);
    }
    void print() const override
    {
        cout << "\t" << name << " [label=\"" << label << "\"]" << endl;
        for (const auto &stmt : next)
        {
            cout << "\t" << name << " -> " << stmt->name << ";" << endl;
            stmt->print();
        }
    }
    ~BlockNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class StatementsNode : public AstNode
{
private:
    vector<AstNode *> next;

public:
    StatementsNode(const string &name)
    {
        this->name = name;
        this->label = "Block Statements";
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        cout << "\t" << name << " [label=\"" << label << "\"]" << endl;
        for (const auto &stmt : next)
        {
            cout << "\t" << name << " -> " << stmt->name << ";" << endl;
            stmt->print();
        }
    }

    ~StatementsNode()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

class assignmentStatement : public AstNode
{
private:
    vector<AstNode *> next;

public:
    assignmentStatement(const string &name)
    {
        this->name = name;
        this->label = "assignment";
    }

    void add(AstNode *node) override
    {
        next.push_back(node);
    }

    void print() const override
    {
        cout << "\t" << name << " [label=\"" << label << "\"]" << endl;
        for (const auto &stmt : next)
        {
            cout << "\t" << name << " -> " << stmt->name << ";" << endl;
            stmt->print();
        }
    }

    ~assignmentStatement()
    {
        for (const auto &stmt : next)
        {
            delete stmt;
        }
    }
};

// Leaf node for representing numeric literals
class NumberNode : public AstNode
{
private:
    int value;

public:
    NumberNode(string name, string label, int value)
    {
        this->name = name;
        this->label = label;
        this->value = value;
    }

    void add(AstNode * /*node*/) override
    {
        cerr << "Cannot add a child to a leaf node." << endl;
    }

    void print() const override
    {
        cout << "\t" << name << " [shape=box,label=\"" << label << ": " << value << "\"]" << endl;
    }
};

// Composite node for representing binary expressions
class BinaryExpressionNode : public AstNode
{
private:
    char operation;
    AstNode *left;
    AstNode *right;

public:
    BinaryExpressionNode(char op, AstNode *l, AstNode *r)
        : operation(op), left(l), right(r) {}

    void add(AstNode *node) override
    {
        if (!left)
            left = node;
        else if (!right)
            right = node;
        else
            cerr << "Binary expression already has two children." << endl;
    }

    void print() const override
    {
        cout << "\t"
             << "BinaryExpressionNode"
             << " [label=\"" << operation << "\"]" << endl;
        left->print();
        cout << "\t"
             << "BinaryExpressionNode"
             << " [label=\"" << operation << "\"]" << endl;
        right->print();
    }

    ~BinaryExpressionNode()
    {
        delete left;
        delete right;
    }
};

class ReturnStatementNode : public AstNode
{
private:
    AstNode *returnValue;

public:
    ReturnStatementNode(AstNode *value)
        : returnValue(value)
    {
        this->name = "ReturnStatement";
    }

    void add(AstNode * /*node*/) override
    {
        cerr << "Cannot add a child to a leaf node." << endl;
    }

    void print() const override
    {
        cout << "\t" << name << " [label=\""
             << "ReturnStatement"
             << "\"]" << endl;
        returnValue->print();
    }

    ~ReturnStatementNode()
    {
        delete returnValue;
    }
};

class AST
{
private:
    AstNode *root = nullptr;

public:
    AST(AstNode *r) : root(r) {}

    void Print()
    {
        cout << "digraph G {" << endl;
        root->print();
        cout << "}" << endl;
    }

    ~AST()
    {
        if (root != nullptr)
        {
            delete root;
            root = nullptr;
        }
    }
};
#endif
