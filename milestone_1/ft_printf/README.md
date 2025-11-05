# ✍️ ft_printf - My Custom Printf Implementation (42 Cursus)

## 🌟 Introduction

**ft_printf** is a mandatory project in the 42 Cursus aimed at recreating a simplified version of the standard C library function `printf(3)`.

This project deepens the understanding of **variadic functions** (functions that accept a variable number of arguments) and involves complex string parsing and formatting logic. The custom function, `ft_printf`, is designed to handle all mandatory conversions and flags necessary to function as a core utility in subsequent projects.

### Key Learning Objectives:

* Mastering the use of **`va_list`**, **`va_start`**, **`va_arg`**, and **`va_end`** for variadic argument handling.
* Implementing precise data type conversions and output formatting.
* Managing memory and output character by character.

## 🛠️ Installation and Usage

To use the custom `ft_printf` function, follow the standard library compilation process:

1.  **Clone the repository:**
    ```bash
    git clone [https://github.com/YOUR_GITHUB_USERNAME/ft_printf.git](https://github.com/YOUR_GITHUB_USERNAME/ft_printf.git)
    cd ft_printf
    ```

2.  **Compile the library:**
    Use the provided `Makefile` to compile the static library (`libftprintf.a`).
    ```bash
    make
    ```

3.  **Include in your project:**
    Include the header file `ft_printf.h` and link the compiled library during your project's compilation.

    **Compilation Example (with a `main.c` file):**
    ```bash
    gcc -Wall -Wextra -Werror main.c -L. -lftprintf -I. -o my_program
    # Run the program
    ./my_program
    ```
    * The compiled library name is typically `libftprintf.a`.

## 📜 Supported Conversions

My `ft_printf` implementation supports all the mandatory conversions and types specified in the project requirements:

| Conversion Specifier | Description |
| :--- | :--- |
| `c` | Prints a single **character**. |
| `s` | Prints a **string** (character array). |
| `p` | Prints a **pointer address** in hexadecimal format. |
| `d` or `i` | Prints a signed **decimal** integer. |
| `u` | Prints an unsigned **decimal** integer. |
| `x` | Prints a number in lowercase **hexadecimal** format. |
| `X` | Prints a number in uppercase **hexadecimal** format. |
| `%` | Prints a literal **percent sign** (`%`). |

## 📐 Implementation Details

### Core Logic

The function works by iterating through the format string. When a percent sign (`%`) is encountered, control is passed to a handler function that parses the conversion specifier and retrieves the corresponding argument using the `va_list` mechanism.

1.  **Iterate:** Loop through the format string character by character.
2.  **Identify Specifier:** When `%` is found, determine the specific conversion type (`c`, `s`, `d`, etc.).
3.  **Retrieve Argument:** Use `va_arg` to safely extract the next variable from the argument list, ensuring the correct data type is requested.
4.  **Format and Output:** Convert the retrieved data into its corresponding string representation.
5.  **Write:** Use the authorized function (`write(1, ...)`) to output the resulting characters to standard output.
6.  **Count:** Keep a precise count of the total characters printed, which is the function's return value.

### Return Value

* Returns the total number of characters written to standard output.
* Returns `-1` on error (e.g., if a write operation fails).

## 🗂️ Project Structure

The typical project structure includes:

. ├── includes/ │ └── ft_printf.h # Function prototypes and includes ├── srcs/ │ ├── ft_printf.c # Main variadic function logic │ └── ... (helper files for conversions and output) └── Makefile # Compilation rules


## 📜 Norm and Compliance

* **Norm:** All code adheres to the strict **42 C Norm** programming style guidelines.
* **Compilation Flags:** All files compile with the mandatory flags: `-Wall -Wextra -Werror`.
* **External Functions:** Only authorized external functions (`malloc`, `free`, `write`, `va_start`, `va_arg`, `va_end`, `va_copy`) were used.

**Author:** Matteo
**42 Login:** Mafagina
