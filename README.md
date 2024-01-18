# Python Compiler

A Python compiler written in C and C++ with the assistance of `Lex` and `Yacc`, utilizing `Flex`, `Bison`, `Win_Flex`, and `Win_Bison`. The project aims to replicate Python's syntax, providing error checking and generating an Abstract Syntax Tree (AST) visualization. [GNU's flex bison](https://www.gnu.org/software/bison/manual/).

## Overview

The Python compiler supports a wide range of Python syntax, including `defining functions`, `classes`, `expressions`, `assignment statements`, `if conditions`, `loops (for and while)`, and various other language structures. It handles features like `inheritance`, `data types`, `arrays (lists)`, `decorations`, and more. The compiler goes through three phases: scanning the code, parsing for validation, and generating an AST for code visualization.

## Target Audience

This project is open to any developer interested in exploring or contributing to a Python compiler implementation.

## Technologies and Dependencies

- C and C++ programming languages
- Lex and Yacc (Flex, Bison, Win_Flex, Win_Bison)
- Graphviz for AST visualization

### Prerequisites

Before running the project, ensure you have the following installed:

- GCC and G++ compilers
  - [GCC Installation Guide](https://gcc.gnu.org/install/index.html)
  - [MinGW Download](https://www.mingw-w64.org/downloads/)

- Flex and Bison
  - [Flex](https://gnuwin32.sourceforge.net/packages/flex.htm)
  - [Bison](https://gnuwin32.sourceforge.net/packages/bison.htm)

- Win_Flex and Win_Bison
  - [Win_Flex_Bison](https://sourceforge.net/projects/winflexbison/)

- Graphviz
  - [Graphviz](https://www.graphviz.org/download/)

## Installation

1. Clone the repository:

    ```bash
    git clone https://github.com/EyasWannous/Compiler-Project.git
    ```

2. Navigate to the project directory:

    ```bash
    cd Python-Compiler
    ```

3. Run the following commands:

    ```bash
    Flex scanner.l
    bison -d parser.y
    bison -v parser.y
    gcc parser.tab.c lex.yy.c
    win_flex scanner.l -o scanner.cpp
    win_bison -d parser.y -o parser.cpp
    g++ ast.cpp scanner.cpp parser.cpp
    ```

4. Execute the compiler with a test file:

    ```bash
    a.exe < Tests/(testFile.py) > p1.gv
    ```

    Replace "(testFile.py)" with the desired test file from the "Tests" directory.

5. Generate AST visualization:

    ```bash
    dot -Tpng -op1.png p1.gv
    ```

## Example

To run the compiler on a sample Python file and visualize the AST:

```bash
a.exe < Tests/p1.py > p1.gv
dot -Tpng -op1.png p1.gv
```

## Contribution

Feel free to clone the repository, experiment with the code, and contribute by sending pull requests. Your contributions are welcome!

---

Let me know if you have any additional information or changes you'd like to make!
## Authors
- [@Eyas-Wannous](https://github.com/EyasWannous)
- [@Majd-Hammad](https://github.com/Majdham000)
