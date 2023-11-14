Title: ALX First-Year Curriculum Project: _printf Implementation

Synopsis:
As part of ALX's first-year curriculum, this team project involves the creation of _printf, which emulates the printf() function from the C standard library.

Key Learning Objectives:

Collaborative use of Git within a team environment.
Application of variadic functions within a substantial project.
Understanding the intricacies and complexities of printf.
Effective management of numerous files and the development of an efficient workflow.

Prototype:

int _printf(const char format, ...);

Functionality:

This function prints a string to the standard output based on a provided format.
All source files were generated and compiled on Ubuntu 14.04.4 LTS using GCC 4.8.4 with the compilation command: gcc -Wall -Werror -Wextra -pedantic.c
On success, it returns the number of characters in the output string; otherwise, it returns -1.
Usage: Call it in this format - _printf("format string", arguments...), where the format string contains conversion specifiers, flags, and regular characters.

Examples:

_printf("Hello, ALX\n") outputs "Hello, ALX" followed by a new line.
_printf("%s", "Hello") outputs "Hello".
_printf("This is Cohort: %d", 1) outputs "This is Cohort: 1".
