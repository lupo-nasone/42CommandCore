# 📚 Libft - My C Library (42 Cursus)

## 🌟 Introduction

This repository contains my custom C library, **Libft**, which is the first mandatory project of the **42 Common Core curriculum**.

The main goal of this project is to recode a set of standard C library functions (`libc`), as well as other useful utility functions. This process helps to:

1.  **Solidify C Fundamentals:** Master core concepts like pointers, memory allocation (`malloc`/`free`), string manipulation, and function prototypes.
2.  **Build a Personal Toolkit:** Create a static library (`libft.a`) containing essential functions that will be authorized and used in all subsequent projects throughout the 42 cursus.

## ⚙️ Installation and Usage

To use the `libft.a` library in your projects, follow these steps:

1.  **Clone the repository:**
    ```bash
    git clone [https://github.com/YOUR_GITHUB_USERNAME/libft.git](https://github.com/YOUR_GITHUB_USERNAME/libft.git)
    cd libft
    ```

2.  **Compile the library:**
    Use the provided `Makefile` to compile the static library `libft.a`.
    ```bash
    make
    ```

3.  **Include in your project:**
    You must include the header file `libft.h` and link the compiled library during your project's compilation.

    **Compilation Example (with a `main.c` file):**
    ```bash
    gcc -Wall -Wextra -Werror main.c -L. -lft -I. -o my_program
    # Run the program
    ./my_program
    ```
    * `-L.` searches for the library in the current directory.
    * `-lft` links the `libft.a` file.
    * `-I.` searches for the `libft.h` header in the current directory.

## 📋 Implemented Functions

The library is organized into three main categories: Libc functions, additional utilities, and bonus linked list management functions.

### 1. Libc Functions (Mandatory Part 1)

These functions are recreations of existing standard C library functions:

| Function | Description |
| :--- | :--- |
| `ft_isalpha` | Checks for an alphabetic character. |
| `ft_isdigit` | Checks for a digit (0 through 9). |
| `ft_isalnum` | Checks for an alphanumeric character. |
| `ft_isascii` | Checks for an ASCII character. |
| `ft_isprint` | Checks for a printable character. |
| `ft_strlen` | Computes the length of the string. |
| `ft_memset` | Fills memory with a constant byte. |
| `ft_bzero` | Writes zeros to a byte string. |
| `ft_memcpy` | Copies memory area. |
| `ft_memmove` | Copies memory area (handles overlapping areas). |
| `ft_strlcpy` | Copies a string with a fixed maximum size (safer). |
| `ft_strlcat` | Concatenates strings with a fixed maximum size (safer). |
| `ft_toupper` | Converts lowercase letter to uppercase. |
| `ft_tolower` | Converts uppercase letter to lowercase. |
| `ft_strchr` | Locates the first occurrence of a character in a string. |
| `ft_strrchr` | Locates the last occurrence of a character in a string. |
| `ft_strncmp` | Compares two strings up to `n` bytes. |
| `ft_memchr` | Scans memory for the first occurrence of a character. |
| `ft_memcmp` | Compares memory areas. |
| `ft_strnstr` | Locates a substring in a string up to `n` characters. |
| `ft_atoi` | Converts an ASCII string to an integer. |
| `ft_calloc` | Allocates memory for an array and initializes it to zero. |
| `ft_strdup` | Duplicates a string using `malloc`. |

### 2. Additional Functions (Mandatory Part 2)

Non-standard utility functions:

| Function | Description |
| :--- | :--- |
| `ft_substr` | Returns a new string from a substring of a given string. |
| `ft_strjoin` | Concatenates two strings into a newly allocated one. |
| `ft_strtrim` | Trims specified characters from the beginning and end of a string. |
| `ft_split` | Splits a string by a delimiter character into an array of strings. |
| `ft_itoa` | Converts an integer into a null-terminated string. |
| `ft_strmapi` | Applies a function to each character of a string to create a new one. |
| `ft_striteri` | Applies a function to each character of a string, passing the index. |
| `ft_putchar_fd` | Outputs a character to the given file descriptor. |
| `ft_putstr_fd` | Outputs a string to the given file descriptor. |
| `ft_putendl_fd` | Outputs a string to the given file descriptor, followed by a newline. |
| `ft_putnbr_fd` | Outputs an integer to the given file descriptor. |

### 3. Bonus Functions

Functions for handling **singly linked lists** (`t_list` structure):

| Function | Description |
| :--- | :--- |
| `ft_lstnew` | Creates a new list node. |
| `ft_lstadd_front` | Adds a node to the beginning of the list. |
| `ft_lstsize` | Counts the number of nodes in a list. |
| `ft_lstlast` | Returns the last node of the list. |
| `ft_lstadd_back` | Adds a node to the end of the list. |
| `ft_lstdelone` | Takes a node and frees the memory of its content and the node itself. |
| `ft_lstclear` | Deletes and frees all nodes in a list, setting the list pointer to NULL. |
| `ft_lstiter` | Applies a function to the content of every node in the list. |
| `ft_lstmap` | Applies a function to all nodes, creating a new list of the results. |

---

## 💻 About 42

This project is part of the **42 Cursus**, a unique and innovative computer science training program.

* **School:** [Link to your 42 school page or the main 42 site]
* **Curriculum:** [Link to the 42 Cursus (optional)]

## 🚀 Status

| Badge | Status |
| :--- | :--- |
| **Project Grade** | [E.g., 125/100, or a score like 100/100] |
| **Mandatory Part** | ✅ Complete |
| **Bonus Part** | ✅ Complete |

---

**Author:** Matteo
**42 Login:** Mafagina
