# 💾 get_next_line (gnl) - Read Line by Line (42 Cursus)

## 🌟 Introduction

**get_next_line** (GNL) is a mandatory project in the 42 Cursus. Its primary goal is to write a function, `get_next_line`, that reads text from a **file descriptor** and returns **one line at a time**, terminating with a newline character (`\n`) or End-Of-File (EOF).

This project is crucial for mastering:

* **Static Variables:** Using static variables to preserve data (the remaining buffer content) across multiple function calls.
* **Dynamic Memory Allocation:** Efficiently managing buffers and dynamically resizing the line buffer.
* **The `read()` System Call:** Utilizing the low-level `read()` system call for input.

## 🛠️ Installation and Usage

To use the custom `get_next_line` function, you typically compile the source files and link them to your application.

1.  **Clone the repository:**
    ```bash
    git clone [https://github.com/YOUR_GITHUB_USERNAME/get_next_line.git](https://github.com/YOUR_GITHUB_USERNAME/get_next_line.git)
    cd get_next_line
    ```

2.  **Compile the function:**
    Use the provided `Makefile` (ensure the `BUFFER_SIZE` is defined correctly in your header or during compilation).
    ```bash
    make
    ```

3.  **Include in your project:**
    Include the header file `get_next_line.h` and link the object files.

    **Compilation Example (using a predefined BUFFER_SIZE):**
    ```bash
    gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 main.c get_next_line.o get_next_line_utils.o -o gnl_test
    # Run the program
    ./gnl_test
    ```

## 🚀 Function Prototype and Return Value

### Prototype
char *get_next_line(int fd);

Return Value
The function returns a dynamically allocated string representing the line that was read.

Return Value,Description
A string (char *),"The line read from the file descriptor, including the terminating \n if present."
NULL,"An error occurred (e.g., invalid file descriptor, malloc failure, read() error) or EOF was reached and no characters were read."

📐 Implementation Details
Core Logic
The core challenge is managing the buffer content that extends beyond the newline character.

Reading: Data is fetched in chunks of BUFFER_SIZE using the read() system call.

Static Storage: A static buffer preserves characters read past the first newline, making them available for the next function call.

Extraction: The line is extracted up to the first \n.

Remainder Saving: The characters following the \n are saved back into the static storage for subsequent calls.

Bonus Part (Multiple File Descriptors)
The bonus part requires handling simultaneous reading from multiple file descriptors (fd). This is typically implemented using an array of static pointers or a linked list, where each storage unit is uniquely associated with an fd.

🗂️ Project Structure
.
├── get_next_line.h       # Function prototype, required includes
├── get_next_line.c       # Main get_next_line logic
├── get_next_line_utils.c # Helper functions (e.g., ft_strlen, ft_strjoin_gnl, ft_strchr)
└── Makefile              # Compilation rules

📜 Norm and Compliance
Norm: All code adheres to the strict 42 C Norm programming style guidelines.

Compilation Flags: All files compile with the mandatory flags: -Wall -Wextra -Werror.

External Functions: Only authorized external functions (malloc, free, read) were used.

Author: Matteo
42 Login: Mafagina
