# 📚 libft

A comprehensive C library containing re-implemented standard library functions and useful utility functions created as part of the 42 School curriculum. This project serves as a foundational toolkit for all subsequent 42 projects where the standard C library functions are restricted.

[![C Language Badge](https://img.shields.io/badge/Language-C-blue?style=flat-square&logo=c)](https://en.cppreference.com/w/c)
[![42 School](https://img.shields.io/badge/School-42-000000?style=flat-square)](https://42.fr)
[![Norminette](https://img.shields.io/badge/Norminette-Compliant-brightgreen?style=flat-square)](https://github.com/42School/norminette)
[![License](https://img.shields.io/badge/License-MIT-green?style=flat-square)](LICENSE)
[![Status](https://img.shields.io/badge/Status-Complete-success?style=flat-square)]()

---

## 📖 Table of Contents

- [Overview](#overview)
- [What You'll Learn](#what-youll-learn)
- [Function Categories](#function-categories)
  - [Character Functions](#character-functions)
  - [String Functions](#string-functions)
  - [Memory Functions](#memory-functions)
  - [Output Functions](#output-functions)
  - [Utility Functions](#utility-functions)
  - [Bonus: Linked Lists](#bonus-linked-lists)
- [Project Structure](#project-structure)
- [Installation & Compilation](#installation--compilation)
- [Usage Examples](#usage-examples)
- [Common Pitfalls & Tips](#common-pitfalls--tips)
- [Resources](#resources)

---

## Overview

**libft** is your personal C standard library. It implements essential C library functions (like `strlen`, `strcpy`, `memcpy`) from scratch, plus additional utility functions designed specifically for use in 42 projects. The library is compiled into a static archive (`libft.a`) that you can link into any subsequent project.

**Why libft matters:**
- 🔒 At 42, many standard library functions are forbidden in projects—libft is your solution
- 📚 Deep understanding of how fundamental C functions work under the hood
- 🏗️ A reusable foundation that grows with your skills throughout the 42 curriculum
- 💡 Practice with memory management, pointers, and algorithm design

---

## What You'll Learn

### 🧠 Core Programming Concepts

**Character Classification & Manipulation**
Understanding ASCII values, character types (isdigit, isalpha, etc.), and case conversion. These seem simple but teach important concepts about working with character encodings and conditional logic.

**String Processing**
Implementing functions like `strlen`, `strcmp`, `strcpy`, and `strdup`. You'll learn about null-terminated strings, pointer arithmetic, and the importance of buffer overflow prevention.

**Memory Management**
Working with `malloc`, `free`, and safely copying memory blocks. This category is critical for preventing memory leaks and understanding the heap vs. the stack.

**Pointer Arithmetic**
Advanced techniques like incrementing pointers, pointer casting, and understanding memory addresses. Essential skills for working at a low level in C.

**Algorithm Design**
Implementing `ft_split` (string splitting), `ft_join` (string concatenation with memory allocation), and more complex utility functions that require algorithmic thinking.

**Linked Lists (Bonus)**
Understanding data structures beyond arrays. Linked lists are fundamental to computer science and solving problems at 42 beyond just string/memory manipulation.

**Function Pointers & Callbacks**
Functions like `ft_map`, `ft_filter`, and linked list operations that take function pointers as parameters teach you functional programming concepts in C.

---

## Function Categories

### Character Functions

These functions check and manipulate individual characters. They all work with the `int` type to handle EOF properly.

| Function | Purpose |
|----------|---------|
| `ft_isalpha` | Check if character is alphabetic (a-z, A-Z) |
| `ft_isdigit` | Check if character is a digit (0-9) |
| `ft_isalnum` | Check if character is alphanumeric |
| `ft_isascii` | Check if character is valid ASCII (0-127) |
| `ft_isprint` | Check if character is printable |
| `ft_isspace` | Check if character is whitespace |
| `ft_tolower` | Convert character to lowercase |
| `ft_toupper` | Convert character to uppercase |

**Example:**
```c
ft_isdigit('5');      // Returns 1 (true)
ft_isalpha('5');      // Returns 0 (false)
ft_tolower('A');      // Returns 'a'
```

---

### String Functions

Core string manipulation functions that form the backbone of text processing in C.

| Function | Purpose |
|----------|---------|
| `ft_strlen` | Get length of string (excluding null terminator) |
| `ft_strcpy` | Copy string from src to dest |
| `ft_strncpy` | Copy first n characters of string |
| `ft_strdup` | Duplicate a string (allocates new memory) |
| `ft_strlcpy` | Safe string copy with size limit |
| `ft_strcat` | Concatenate two strings |
| `ft_strlcat` | Safe string concatenation with size limit |
| `ft_strcmp` | Compare two strings |
| `ft_strncmp` | Compare first n characters of two strings |
| `ft_strchr` | Find first occurrence of character in string |
| `ft_strrchr` | Find last occurrence of character in string |
| `ft_strstr` | Find first occurrence of substring |
| `ft_strnstr` | Find substring with length limit |
| `ft_strrev` | Reverse a string (bonus) |
| `ft_strjoin` | Concatenate two strings with malloc (bonus) |
| `ft_strtrim` | Remove leading/trailing characters (bonus) |
| `ft_split` | Split string by delimiter into array (bonus) |
| `ft_strmapi` | Apply function to each character (bonus) |
| `ft_striteri` | Apply function to each character with index (bonus) |

**Example:**
```c
char *str = ft_strdup("Hello");        // Allocates and copies
ft_strlen(str);                        // Returns 5
ft_strcmp(str, "Hello");               // Returns 0 (equal)
ft_strchr(str, 'l');                   // Returns pointer to first 'l'
```

---

### Memory Functions

Low-level memory operations for copying, comparing, and manipulating raw bytes.

| Function | Purpose |
|----------|---------|
| `ft_memset` | Fill memory with a byte value |
| `ft_bzero` | Fill memory with zeros |
| `ft_memcpy` | Copy memory block (non-overlapping) |
| `ft_memmove` | Copy memory block (handles overlaps) |
| `ft_memcmp` | Compare two memory blocks |
| `ft_memchr` | Find byte in memory block |
| `ft_calloc` | Allocate and zero-fill memory |

**Example:**
```c
char buffer[10];
ft_memset(buffer, 'A', 5);             // buffer = "AAAAA"
ft_bzero(buffer, 10);                  // Zeros out all 10 bytes
```

---

### Output Functions

Functions for writing to file descriptors (typically stdout).

| Function | Purpose |
|----------|---------|
| `ft_putchar_fd` | Write single character to file descriptor |
| `ft_putstr_fd` | Write string to file descriptor |
| `ft_putendl_fd` | Write string + newline to file descriptor |
| `ft_putnbr_fd` | Write integer to file descriptor |

**Example:**
```c
ft_putchar_fd('A', 1);                 // Writes 'A' to stdout
ft_putstr_fd("Hello", 1);              // Writes "Hello" to stdout
ft_putnbr_fd(-42, 1);                  // Writes "-42" to stdout
```

---

### Utility Functions

Additional useful functions for common programming tasks.

| Function | Purpose |
|----------|---------|
| `ft_atoi` | Convert ASCII string to integer |
| `ft_itoa` | Convert integer to ASCII string (bonus) |
| `ft_abs` | Get absolute value |
| `ft_max` | Get maximum of two numbers |
| `ft_min` | Get minimum of two numbers |

**Example:**
```c
ft_atoi("42");                         // Returns 42 (as int)
ft_atoi("-100");                       // Returns -100
char *num_str = ft_itoa(42);           // Returns "42" (allocated)
```

---

### Bonus: Linked Lists

Optional functions for working with singly-linked lists. Essential for more complex data structures.

| Function | Purpose |
|----------|---------|
| `ft_lstnew` | Create new list node |
| `ft_lstadd_front` | Add node to beginning of list |
| `ft_lstadd_back` | Add node to end of list |
| `ft_lstsize` | Count nodes in list |
| `ft_lstlast` | Get last node of list |
| `ft_lstdelone` | Delete single node |
| `ft_lstclear` | Delete entire list |
| `ft_lstiter` | Apply function to each node's content |
| `ft_lstmap` | Apply function to each node, create new list |

**Example:**
```c
t_list *head = ft_lstnew("First");
ft_lstadd_back(&head, ft_lstnew("Second"));
int size = ft_lstsize(head);           // Returns 2
ft_lstclear(&head, free);              // Delete entire list
```

---

## Project Structure

```
libft/
├── Makefile                    # Build automation
├── libft.h                     # Main header file
├── libft_bonus.h              # Bonus structures (linked lists)
│
├── src/                        # Mandatory source files
│   ├── ctype/                 # Character classification functions
│   │   ├── ft_isalpha.c
│   │   ├── ft_isdigit.c
│   │   ├── ft_isalnum.c
│   │   ├── ft_isascii.c
│   │   ├── ft_isprint.c
│   │   ├── ft_tolower.c
│   │   └── ft_toupper.c
│   │
│   ├── string/                # String manipulation functions
│   │   ├── ft_strlen.c
│   │   ├── ft_strcpy.c
│   │   ├── ft_strdup.c
│   │   ├── ft_strcmp.c
│   │   ├── ft_strchr.c
│   │   └── ... (more string functions)
│   │
│   ├── memory/                # Memory manipulation functions
│   │   ├── ft_memset.c
│   │   ├── ft_bzero.c
│   │   ├── ft_memcpy.c
│   │   ├── ft_memmove.c
│   │   ├── ft_memcmp.c
│   │   └── ft_memchr.c
│   │
│   ├── io/                    # Input/Output functions
│   │   ├── ft_putchar_fd.c
│   │   ├── ft_putstr_fd.c
│   │   ├── ft_putendl_fd.c
│   │   └── ft_putnbr_fd.c
│   │
│   └── utils/                 # Utility functions
│       ├── ft_atoi.c
│       ├── ft_calloc.c
│       └── ft_abs.c
│
├── src_bonus/                  # Bonus source files
│   ├── string_bonus/          # Advanced string functions
│   │   ├── ft_strjoin.c
│   │   ├── ft_strtrim.c
│   │   ├── ft_split.c
│   │   ├── ft_strmapi.c
│   │   ├── ft_striteri.c
│   │   └── ft_itoa.c
│   │
│   └── list/                  # Linked list functions
│       ├── ft_lstnew.c
│       ├── ft_lstadd_front.c
│       ├── ft_lstadd_back.c
│       ├── ft_lstsize.c
│       ├── ft_lstlast.c
│       ├── ft_lstdelone.c
│       ├── ft_lstclear.c
│       ├── ft_lstiter.c
│       └── ft_lstmap.c
│
└── README.md                   # This file
```

---

## Installation & Compilation

### Requirements

- GCC or Clang compiler
- `make` utility
- Standard POSIX environment (Linux, macOS, or Windows with WSL)

### Compilation

```bash
# Clone the repository
git clone https://github.com/ahmedaitelaaoud/libft.git
cd libft

# Compile mandatory part only
make

# Compile with bonus functions
make bonus

# Clean object files (keeps libft.a)
make clean

# Remove all generated files (objects + library)
make fclean

# Clean and rebuild everything
make re
```

This will generate `libft.a`, a static library ready to be linked into your projects.

---

## Usage Examples

### Basic Setup

```bash
# In your project directory
gcc your_program.c -L./libft -lft -o program
# Or with headers in a different location
gcc your_program.c -I./libft -L./libft -lft -o program
```

### Character Functions

```c
#include "libft.h"

int main(void)
{
    if (ft_isdigit('5'))
        ft_putstr_fd("It's a digit!\n", 1);
    
    char c = 'A';
    ft_putchar_fd(ft_tolower(c), 1);   // Outputs: a
    
    return (0);
}
```

### String Functions

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    // String duplication
    char *original = "Hello, World!";
    char *copy = ft_strdup(original);
    printf("Length: %zu\n", ft_strlen(copy));  // Output: 13
    
    // String comparison
    if (ft_strcmp(copy, original) == 0)
        printf("Strings are equal\n");
    
    // Finding characters
    char *ptr = ft_strchr(copy, 'W');
    printf("Found at: %s\n", ptr);             // Output: World!
    
    free(copy);
    return (0);
}
```

### Memory Functions

```c
#include "libft.h"
#include <stdlib.h>

int main(void)
{
    // Allocate and zero-fill memory
    int *array = ft_calloc(10, sizeof(int));
    // array is now a zero-filled array of 10 ints
    
    // Memory copy
    char src[20] = "Hello";
    char dst[20];
    ft_memcpy(dst, src, 5);
    dst[5] = '\0';
    printf("%s\n", dst);                       // Output: Hello
    
    free(array);
    return (0);
}
```

### String Splitting (Bonus)

```c
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *str = "apple,banana,cherry";
    char **words = ft_split(str, ',');
    
    for (int i = 0; words[i]; i++)
    {
        printf("%s\n", words[i]);              // Outputs each word
        free(words[i]);
    }
    free(words);
    
    return (0);
}
```

### Linked Lists (Bonus)

```c
#include "libft.h"
#include <stdlib.h>

int main(void)
{
    t_list *head = NULL;
    
    // Build a list
    ft_lstadd_back(&head, ft_lstnew("First"));
    ft_lstadd_back(&head, ft_lstnew("Second"));
    ft_lstadd_back(&head, ft_lstnew("Third"));
    
    // Traverse and print
    ft_lstiter(head, (void (*)(void *))puts);
    
    // Get size
    printf("List size: %d\n", ft_lstsize(head));  // Output: 3
    
    // Clean up
    ft_lstclear(&head, free);
    
    return (0);
}
```

---

## Common Pitfalls & Tips

### 🚨 Memory Management

**Leak Risk:** Functions like `ft_strdup`, `ft_strjoin`, and `ft_split` allocate memory—always `free()` the returned pointers.

```c
// ✅ CORRECT
char *str = ft_strdup("Hello");
// ... use str ...
free(str);

// ❌ WRONG - Memory leak!
char *str = ft_strdup("Hello");
// ... forgot to free!
```

### 🚨 Null-Terminated Strings

Always ensure strings are null-terminated when using string functions.

```c
// ✅ CORRECT
char buffer[11];
ft_strlcpy(buffer, "Hello", 11);  // Safe, includes room for \0

// ❌ WRONG - Buffer overflow!
char buffer[5];
ft_strcpy(buffer, "HelloWorld"); // Copies 11 bytes into 5-byte buffer!
```

### 🚨 Pointer Arithmetic

Remember that incrementing a pointer increases it by the size of its type.

```c
int *ptr = malloc(10 * sizeof(int));
ptr++;  // Moves forward by sizeof(int), not 1 byte!
```

### 💡 Testing Your Library

```bash
# Create a simple test program
gcc test.c -L. -lft -o test_libft
./test_libft

# Or use an online tester (many 42 schools provide them)
```

### 💡 Using in 42 Projects

Copy libft files to your project and include the header:

```c
#include "../libft/libft.h"

// Now you can use all ft_ functions!
int len = ft_strlen("test");
```

---

## Resources

### Learning Materials

- [cppreference C Standard Library](https://en.cppreference.com/w/c/string) — Official C reference
- [Linux man pages](https://linux.die.net/man/3/) — Detailed documentation of standard functions
- [Pointer and Memory Basics](https://www.cprogramming.com/tutorial/pointers.html) — Essential foundation
- [Dynamic Memory Allocation](https://www.programiz.com/c-programming/c-dynamic-memory-allocation) — malloc/free guide
- [ASCII Table](https://www.asciitable.com/) — Character encoding reference

### Testing Tools

- **42 Testers** — Many schools provide automated test suites (check your school's GitHub)
- **Francinette** — Popular 42 project testing framework
- **Moulinette** — Official 42 testing system

### Related 42 Projects

- **ft_printf** — Custom printf implementation (uses libft)
- **get_next_line** — Buffered line reading (uses libft)
- **minitalk** — IPC with signals (uses libft)
- **pipex** — Unix pipes (uses libft)
- **push_swap** — Sorting algorithms (uses libft + bonus lists)

### Practice Exercises

- Reimplement each function from scratch without looking at existing code
- Write unit tests comparing your functions with standard library equivalents
- Try to optimize functions (e.g., faster `ft_memcpy` using larger copy units)
- Implement additional utility functions you find useful

---

## Bonus Features

### Extended String Functions

- `ft_strjoin` — Join two strings with new allocation
- `ft_strtrim` — Remove characters from both ends
- `ft_split` — Split string by delimiter
- `ft_strmapi` — Map function over characters
- `ft_itoa` — Convert integer to string

### Linked List Operations

- `ft_lstmap` — Create new list from function applied to each node
- `ft_lstiter` — Apply function to each node
- `ft_lstclear` — Free entire list safely

These bonus functions are optional but highly recommended—they're used in many subsequent 42 projects.

---

## Tips for Success

🎓 **Master the Mandatory Part First** — Get comfortable with basic string and memory functions before attempting bonus

🎓 **Read the Man Pages** — Understanding how standard functions work helps you implement them correctly

🎓 **Test Edge Cases** — Empty strings, NULL pointers, single characters, very long strings

🎓 **Use Norminette** — Keep your code formatted correctly from the start (it's much easier than reformatting later)

🎓 **Comment Your Code** — Future you will thank present you when debugging

🎓 **Don't Reinvent the Wheel** — After libft, you can reuse it in every project—keep it well-maintained!

---

## Author

Created as part of the 42 School curriculum.

**GitHub:** [ahmedaitelaaoud](https://github.com/ahmedaitelaaoud)

**Repository:** [libft](https://github.com/ahmedaitelaaoud/libft)

**License:** MIT

---

**Last Updated:** November 2025 | **Status:** ✅ Complete & Production Ready

---

### Quick Reference Card

```c
// Character functions
ft_isalpha(c), ft_isdigit(c), ft_toupper(c), ft_tolower(c)

// String length and copy
ft_strlen(s), ft_strcpy(d, s), ft_strdup(s)

// String comparison
ft_strcmp(s1, s2), ft_strncmp(s1, s2, n)

// String search
ft_strchr(s, c), ft_strstr(s, needle)

// Memory operations
ft_memset(p, v, n), ft_memcpy(d, s, n), ft_bzero(p, n)

// Allocation
ft_calloc(n, size), malloc(size), free(p)

// Output
ft_putchar_fd(c, fd), ft_putstr_fd(s, fd), ft_putnbr_fd(n, fd)

// Conversion
ft_atoi(s), ft_itoa(n)

// Bonus: Strings
ft_strjoin(s1, s2), ft_split(s, c), ft_strmapi(s, f)

// Bonus: Lists
ft_lstnew(c), ft_lstadd_back(&h, n), ft_lstsize(h), ft_lstclear(&h, f)
```
