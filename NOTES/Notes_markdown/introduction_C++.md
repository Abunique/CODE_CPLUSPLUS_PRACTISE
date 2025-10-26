## C/C++ Programming Notes

-----

### Goals of Studying C/C++

The primary goals of C and C++ programming are to:

  * Improve understanding about the processes "behind the stage" of an App running.
  * Aid in **interview preparation**.
  * Engage in **Competitive programming**.
  * Understand the **translator rules** for code.

-----

### Key Programming Concepts and Terminology

| Term | Definition |
| :--- | :--- |
| **Program/Source Code/Code** | Instructions written by humans. |
| **Machine Code** | Machine understandable instruction. |
| **Statement** | A type of instruction. |
| **Syntax** | Rules for programming. |
| **Compiler** | A translator that converts source code to machine code in **one go**. |
| **Interpreter** | A translator that takes source code one line by line and gives equivalent machine code. |
| **Execution** | Running a program/source code. |
| **Debugging** | The process of eliminating bugs in a program. |

#### Types of Errors

Errors that occur during programming are categorized as:

  * **Syntax Error**: An error due to a mistake in the **Syntax Rules** of the programming language.
  * **Logical Error**: An error in the logic used by the programmer.
  * **Runtime Error**: An error that occurs during execution/run time.
  * **Bug**: Any error is referred to as a bug.

-----

### C++ Language Overview

#### Definition and Characteristics

C++ is defined as a:

  * **Middle-level** language.
  * **Multi-paradigm** language.
  * **Statically typed** language.
  * **General purpose** language.

**General Purpose** languages are used for more than one application. In contrast, a **Special Purpose** programming language is designed to be used for one-specific application development (e.g., HTML for webpage).

#### Language Typing

  * **Statically Typed**: Every object has to be type defined. The object type is defined during **Compilation/Runtime** (e.g., `int x = 10` in C, C++).

#### Language Levels (Abstraction and Complexity)

Programming languages are categorized by their level of abstraction and complexity:

| Level | Level of Complexity | Level of Abstraction | Examples |
| :--- | :--- | :--- | :--- |
| **Low** | High | Low | Assembly (ASM) |
| **Middle** | Average | Medium | C, C++ |
| **High** | Low | High | Python |

#### Multi-Paradigm Capability

C++ can be used for different styles of coding, supporting:

  * **Procedural** programming.
  * **Object-Oriented** programming.

#### C++ Standards

This study is going to follow the **C++17** version.

-----

### Tools and Program Structure

#### Necessary Tools

To develop C/C++ applications, the following tools are needed:

  * **Text editor** (Code editor).
  * **Compiler**.
  * **Debugger**.
  * **Command prompt**.
  * *Example Tool*: **STMcube IDE** (using C++ build settings maximized for C++17 version).

#### Sample Program Structure

```cpp
#include <iostream> // Preprocessor directive
int main()
{
  std::cout << "hi" << std::endl;
  return 0;
}
```

  * **`#include <iostream>`**: This is a **preprocessor directive** for inclusion. The pre-processor will add the `iostream` file *before* the compiler runs.
  * **`int main()`**: This is the **start of the program** and is the first function always called by the operating system.
  * **`std::cout`**: A tool for printing output. It takes input like `"hi"` and `std::endl` (new line).
  * **`return 0;`**: The `main()` function returns a value. A return value of **0** indicates success. A **non-zero** value indicates failure.
