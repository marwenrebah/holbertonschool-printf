# Hi 👨🏻‍💻, I'm Marwen Rebah

![Printf!](https://github.com/marwenrebah/holbertonschool-printf/assets/133456502/9e798d95-b20e-4d86-9dbc-c3b3d57a9d35)

## Printf

My first project at Holberton School, the `printf` project is a Low-Level Programming project written in C language. The function receives a format (`const char *format`) and a list of arguments. Inside `printf`, the string format is analyzed for specific patterns. The matched pattern is then passed to another function that prints the corresponding output.

## Patterns

| Specifiers | Functions       | Description    |
|------------|-----------------|----------------|
| s          | print_string    | print a string |
| c          | print_char      | print a character |
| i          | print_integer   | print an integer |
| d          | print_integer   | print an integer |

## Files

The following three functions are the foundation of this project:

1. `Printf`: The entry point for the `printf` function, it receives the variables to format and print.
2. `Print function`: Controls the formatting and string handling.
3. `Select function`: Compares possible specifiers with the current pattern and returns the corresponding function.

| Files       | Description                     |
|-------------|---------------------------------|
| _printf.c   | Entry point for the `printf`.   |
| main.h      | Header files for the entire project|

## Description

1. The function iterates over the characters in the format string, processing each character one by one.
2. When encountering a `%` character, the function checks the next character to determine if it is a format specifier or an escaped `%`.
3. If a valid format specifier is found (e.g., `%d`, `%s`, `%c`), the corresponding print function is called to handle the specific data type.
4. If an invalid format specifier is encountered, the function prints the previous `%` character and the invalid specifier character as regular characters.
5. The function uses variable arguments (variadic function) provided by the `stdarg.h` library to handle the variable number of arguments passed after the format string.

## Languages and Tools

🚀 [C Programming](https://www.cprogramming.com/)

---

Authors:
🚀 Marwen Rebah
📧 Email: 6863@holbertonstudents.com
👻 Github: [https://github.com/marwenrebah](https://github.com/marwenrebah)