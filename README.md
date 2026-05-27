<div align="center">

<img src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white" />
<img src="https://img.shields.io/badge/Standard-C99%20%7C%20C11%20%7C%20C17-blue?style=for-the-badge" />
<img src="https://img.shields.io/badge/License-MIT-green?style=for-the-badge" />
<img src="https://img.shields.io/badge/Level-Beginner%20to%20Advanced-orange?style=for-the-badge" />
<img src="https://img.shields.io/badge/Compiler-GCC%20%7C%20Clang-lightgrey?style=for-the-badge" />

<br/>
<br/>

# 🔷 C Code College

### *Master the language that powers the world.*

C is a general-purpose, procedural programming language developed in the early 1970s. It remains one of the most widely used languages in the world — forming the backbone of operating systems, embedded systems, compilers, and high-performance applications.

<br/>

</div>

---

## 📌 Table of Contents

- [About](#-about)
- [Features](#-features)
- [Program Structure](#-program-structure)
- [Core Concepts](#-core-concepts)
- [Code Example](#-code-example)
- [Technologies](#-technologies)
- [Getting Started](#-getting-started)
- [Best Practices](#-best-practices)
- [Conclusion](#-conclusion)

---

## 🧭 About

This repository is a structured collection of **C programming concepts** designed for learners from beginner to advanced level. Each program is written with clean code, proper comments, and follows industry-standard best practices.

> 💡 *"C is the foundation. Master it, and every other language becomes easier."*

---

## ✨ Features

| 🔖 Feature | 📝 Description |
|---|---|
| 🖥️ **Input / Output** | Console I/O using `printf()` and `scanf()` |
| 🔀 **Control Flow** | Decision making with `if`, `else if`, `switch` |
| 🔁 **Loops** | Iteration using `for`, `while`, `do-while` |
| 🧩 **Functions** | Modular, reusable, well-named functions |
| 📦 **Arrays** | Single and multi-dimensional array handling |
| 🧠 **Pointers** | Memory addresses, pointer arithmetic |
| 🗂️ **Structures** | Custom data types using `struct` |
| 📁 **File Handling** | Read/write files using `fopen`, `fclose` |
| 🔒 **Memory Management** | Dynamic memory with `malloc`, `free` |

---

## 🏗️ Program Structure

```
C-Code-College/
│
├── 📁 01_basics/
│   ├── hello_world.c
│   ├── variables.c
│   └── data_types.c
│
├── 📁 02_control_flow/
│   ├── if_else.c
│   ├── switch_case.c
│   └── loops.c
│
├── 📁 03_functions/
│   ├── basic_functions.c
│   ├── recursion.c
│   └── pass_by_reference.c
│
├── 📁 04_arrays_strings/
│   ├── arrays.c
│   └── strings.c
│
├── 📁 05_pointers/
│   ├── pointers_intro.c
│   └── pointer_arithmetic.c
│
├── 📁 06_structures/
│   └── structs.c
│
└── 📁 07_file_handling/
    └── file_operations.c
```

---

## 🧠 Core Concepts

### 🔹 Variables & Data Types
C supports several primitive data types:

| Type | Size | Description |
|---|---|---|
| `int` | 4 bytes | Integer numbers |
| `float` | 4 bytes | Single precision decimal |
| `double` | 8 bytes | Double precision decimal |
| `char` | 1 byte | Single character |
| `void` | — | No value / return type |

### 🔹 Memory Management
C gives you direct control over memory:
- **Stack** — automatic, local variables
- **Heap** — manual allocation with `malloc()` / `free()`
- **Pointers** — store memory addresses for direct access

---

## 💻 Code Example

### ✅ Hello World

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

### ✅ Functions & Arrays

```c
#include <stdio.h>

// Function to calculate average of an array
float average(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float)sum / size;
}

int main() {
    int marks[] = {85, 90, 78, 92, 88};
    int size = 5;

    printf("Student: Himanshu\n");
    printf("Average Marks: %.2f\n", average(marks, size));

    return 0;
}
```

**Output:**
```
Student: Himanshu
Average Marks: 86.60
```

### ✅ Pointers

```c
#include <stdio.h>

int main() {
    int num = 42;
    int *ptr = &num;

    printf("Value: %d\n", *ptr);
    printf("Address: %p\n", (void*)ptr);

    return 0;
}
```

---

## 🛠️ Technologies

| Category | Tools |
|---|---|
| ⚙️ **Compiler** | GCC, Clang, MSVC, TCC |
| 📋 **Standard** | C89 / C99 / C11 / C17 |
| 🐛 **Debugger** | GDB, LLDB, Valgrind |
| 🔨 **Build System** | Make, CMake |
| 🖥️ **IDE / Editor** | VS Code, CLion, Dev-C++, Vim |
| 🖥️ **Platform** | Windows, Linux, macOS |

---

## 🚀 Getting Started

### Prerequisites

Make sure GCC is installed:

```bash
gcc --version
```

### Clone the Repository

```bash
git clone https://github.com/yourusername/C-Code-College.git
cd C-Code-College
```

### Compile & Run

```bash
# Compile
gcc hello_world.c -o hello_world

# Run on Linux/macOS
./hello_world

# Run on Windows
hello_world.exe
```

---

## 📐 Best Practices

- ✅ Always initialize variables before use
- ✅ Free dynamically allocated memory with `free()`
- ✅ Use meaningful variable and function names
- ✅ Add comments for complex logic
- ✅ Check return values of `malloc()` and file functions
- ✅ Avoid global variables when possible
- ✅ Use `const` for values that should not change
- ✅ Compile with warnings enabled: `gcc -Wall -Wextra`

---

## 🎯 Conclusion

**C** is the mother of modern programming languages. From the Linux kernel to embedded microcontrollers, C powers some of the most critical software in the world. Mastering C gives you:

- 🧠 Deep understanding of how computers work
- ⚡ Ability to write high-performance code
- 🔓 Foundation for C++, Java, Python, and more
- 💼 Strong base for systems and embedded engineering careers

---

## 📜 License

This project is licensed under the **MIT License** — feel free to use, modify, and distribute.

---

<div align="center">

### 🌟 If this helped you, give it a star!

Made with ❤️ by **Himanshu** &nbsp;|&nbsp; C Code College

![Visitors](https://visitor-badge.laobi.icu/badge?page_id=himanshu.C-Code-College)

</div>
