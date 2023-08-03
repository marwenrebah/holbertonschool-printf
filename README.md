<h1 align="center">Hi 👨🏻‍💻, I'm Marwen Rebah</h1>

![Printf!](https://github.com/marwenrebah/holbertonschool-printf/assets/133456502/9e798d95-b20e-4d86-9dbc-c3b3d57a9d35)

<h1>Printf</h1>
<p>My first project at Holberton School, The printf project is a Low-Level Programming project writen in C language.<br>
the function receives a format (const char *format) and a list of arguments, So printf inside, take the string format and search for specific patterns, then the pattern that was found it is passed to other function that prints the match pattern.</p>
<h1>Patterns</h1>

| Specifiers      | Functions | Description |
| ----------- | ----------- | ----------|
| s      | print_string       | print a string|
| c   | print_char        | print just a char|
| i | print_integer	| print a number  |
| d   | print_integer | print a number |

<h1>Files</h1>
<p>These 3 functions are the bases for this project:</p>
<p>1- Printf: Is the frontend of all the algorithm, so is the prototype, and just receive the variables.</p>
<p>2- Print function: Is the controller for the string and the formats.</p>
<p>3- Select function: Compare a list of possible specifiers with the current pattern, and return the corresponding function.</p>

| Files      | Description |
| ----------- | ----------- |
| _printf.c      | Entry point for the printf.     |
| main.h   | Header files for the the whole project.        |

<h1>Description</h1>
<p> 1 - The function iterates over the characters in the format string, processing each character one by one.<br>
2 - When encountering a % character, the function checks the next character to determine if it is a format specifier or an escaped %.<br>
3 - If a valid format specifier is found (e.g., %d, %s, %c), the corresponding print function is called to handle the specific data type.<br>
4 - If an invalid format specifier is encountered, the function prints the previous % character and the invalid specifier character as regular characters.<br>
5 - The function uses variable arguments (variadic function) provided by the stdarg.h library to handle the variable number of arguments passed after the format string.<br> </p>

<h2 align="center">Languages and Tools:</h2>
<p align="center"> <a href="https://www.cprogramming.com/" target="_blank" rel="noreferrer"> <img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/c/c-original.svg" alt="c" width="40" height="40"/> </a> </p>
