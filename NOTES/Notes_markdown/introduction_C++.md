# \## C/C++ Programming Notes

# 

# -----

# 

# \### Goals of Studying C/C++

# 

# The primary goals of C and C++ programming are to:

# 

# &nbsp; \* \[cite\\\_start]Improve understanding about the processes "behind the stage" of an App running\[cite: 10].

# &nbsp; \* \[cite\\\_start]Aid in \*\*interview preparation\*\*\[cite: 10].

# &nbsp; \* \[cite\\\_start]Engage in \*\*Competitive programming\*\*\[cite: 10].

# &nbsp; \* \[cite\\\_start]Understand the \*\*translator rules\*\* for code\[cite: 3, 4, 7].

# 

# -----

# 

# \### Key Programming Concepts and Terminology

# 

# | Term | Definition |

# | :--- | :--- |

# | \*\*Program/Source Code/Code\*\* | \[cite\\\_start]Instructions written by humans\[cite: 15]. |

# | \*\*Machine Code\*\* | \[cite\\\_start]Machine understandable instruction\[cite: 15]. |

# | \*\*Statement\*\* | \[cite\\\_start]A type of instruction\[cite: 15]. |

# | \*\*Syntax\*\* | \[cite\\\_start]Rules for programming\[cite: 15]. |

# | \*\*Compiler\*\* | \[cite\\\_start]A translator that converts source code to machine code in \*\*one go\*\*\[cite: 15]. |

# | \*\*Interpreter\*\* | \[cite\\\_start]A translator that takes source code one line by line and gives equivalent machine code\[cite: 15]. |

# | \*\*Execution\*\* | \[cite\\\_start]Running a program/source code\[cite: 15]. |

# | \*\*Debugging\*\* | \[cite\\\_start]The process of eliminating bugs in a program\[cite: 15]. |

# 

# \#### Types of Errors

# 

# Errors that occur during programming are categorized as:

# 

# &nbsp; \* \[cite\\\_start]\*\*Syntax Error\*\*: An error due to a mistake in the \*\*Syntax Rules\*\* of the programming language\[cite: 15].

# &nbsp; \* \[cite\\\_start]\*\*Logical Error\*\*: An error in the logic used by the programmer\[cite: 15].

# &nbsp; \* \[cite\\\_start]\*\*Runtime Error\*\*: An error that occurs during execution/run time\[cite: 15].

# &nbsp; \* \[cite\\\_start]\*\*Bug\*\*: Any error is referred to as a bug\[cite: 15].

# 

# -----

# 

# \### C++ Language Overview

# 

# \#### Definition and Characteristics

# 

# C++ is defined as a:

# 

# &nbsp; \* \[cite\\\_start]\*\*Middle-level\*\* language\[cite: 17].

# &nbsp; \* \[cite\\\_start]\*\*Multi-paradigm\*\* language\[cite: 18, 51].

# &nbsp; \* \[cite\\\_start]\*\*Statically typed\*\* language\[cite: 18, 41].

# &nbsp; \* \[cite\\\_start]\*\*General purpose\*\* language\[cite: 18].

# 

# \[cite\\\_start]\*\*General Purpose\*\* languages are used for more than one application\[cite: 27, 29, 31]. \[cite\\\_start]In contrast, a \*\*Special Purpose\*\* programming language is designed to be used for one-specific application development (e.g., HTML for webpage)\[cite: 23, 26].

# 

# \#### Language Typing

# 

# &nbsp; \* \[cite\\\_start]\*\*Statically Typed\*\*: Every object has to be type defined\[cite: 42, 43]. \[cite\\\_start]The object type is defined during \*\*Compilation/Runtime\*\* \[cite: 47] \[cite\\\_start](e.g., `int x = 10` in C, C++ \[cite: 44, 45, 46]).

# 

# \#### Language Levels (Abstraction and Complexity)

# 

# \[cite\\\_start]Programming languages are categorized by their level of abstraction and complexity\[cite: 40]:

# 

# | Level | Level of Complexity | Level of Abstraction | Examples |

# | :--- | :--- | :--- | :--- |

# | \*\*Low\*\* | High | Low | \[cite\\\_start]Assembly (ASM) \[cite: 39, 40] |

# | \*\*Middle\*\* | Average | Medium | \[cite\\\_start]C, C++ \[cite: 40] |

# | \*\*High\*\* | Low | High | \[cite\\\_start]Python \[cite: 40] |

# 

# \#### Multi-Paradigm Capability

# 

# \[cite\\\_start]C++ can be used for different styles of coding\[cite: 53], supporting:

# 

# &nbsp; \* \[cite\\\_start]\*\*Procedural\*\* programming\[cite: 61].

# &nbsp; \* \[cite\\\_start]\*\*Object-Oriented\*\* programming\[cite: 63, 66].

# 

# \#### C++ Standards

# 

# \[cite\\\_start]This study is going to follow the \*\*C++17\*\* version\[cite: 65, 67, 90].

# 

# -----

# 

# \### Tools and Program Structure

# 

# \#### Necessary Tools

# 

# \[cite\\\_start]To develop C/C++ applications, the following tools are needed\[cite: 71, 72]:

# 

# &nbsp; \* \[cite\\\_start]\*\*Text editor\*\* (Code editor)\[cite: 74].

# &nbsp; \* \[cite\\\_start]\*\*Compiler\*\*\[cite: 76].

# &nbsp; \* \[cite\\\_start]\*\*Debugger\*\*\[cite: 77].

# &nbsp; \* \[cite\\\_start]\*\*Command prompt\*\*\[cite: 77].

# &nbsp; \* \[cite\\\_start]\*Example Tool\*: \*\*STMcube IDE\*\* (using C++ build settings maximized for C++17 version)\[cite: 82, 83, 84].

# 

# \#### Sample Program Structure

# 

# ```cpp

# \#include <iostream> // Preprocessor directive

# int main()

# {

# &nbsp; std::cout << "hi" << std::endl;

# &nbsp; return 0;

# }

# ```

# 

# &nbsp; \* \[cite\\\_start]\*\*`#include <iostream>`\*\*: This is a \*\*preprocessor directive\*\* for inclusion\[cite: 86, 89, 93]. \[cite\\\_start]The pre-processor will add the `iostream` file \*before\* the compiler runs\[cite: 94].

# &nbsp; \* \[cite\\\_start]\*\*`int main()`\*\*: This is the \*\*start of the program\*\* \[cite: 95] \[cite\\\_start]and is the first function always called by the operating system\[cite: 97, 98].

# &nbsp; \* \[cite\\\_start]\*\*`std::cout`\*\*: A tool for printing output\[cite: 99, 101]. \[cite\\\_start]It takes input like `"hi"` and `std::endl` (new line)\[cite: 102].

# &nbsp; \* \[cite\\\_start]\*\*`return 0;`\*\*: The `main()` function returns a value\[cite: 100]. \[cite\\\_start]A return value of \*\*0\*\* indicates success\[cite: 103, 104]. \[cite\\\_start]A \*\*non-zero\*\* value indicates failure\[cite: 105].

