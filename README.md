# ft_printf

This project has been created as part of the 42 curriculum by ssaghate.

---

## Description

ft_printf is a custom implementation of the standard printf function in C.
It allows formatted output to the standard output while reinforcing knowledge of variadic functions, string manipulation, and low-level formatting in C.


## Project Goal

- Recreate the behavior of the standard printf function.
- Handle different conversion specifiers like strings, characters, integers, unsigned integers, hexadecimal numbers, and pointers.
- Learn how to manage variadic arguments with stdarg.h.
- Improve understanding of memory management, formatting, and return values.

## Instructions
### Compilation

The project can be compiled using the provided Makefile and the `cc` compiler
with the following flags:

-Wall -Wextra -Werror


To compile the library, run:

make


This will generate the static library file libftprintf.a at the root of the repository.

### Makefile rules

- make / make all
- make clean
- make fclean
- make re

## Supported Conversion Specifiers

- %c — print a character
- %s — print a string
- %p — print a pointer address
- %d / %i — print a signed integer
- %u — print an unsigned integer
- %x — print a number in lowercase hexadecimal
- %X — print a number in uppercase hexadecimal
- %% — print a literal percent sign

---

## Resources

- Linux manual pages (man 3 printf, man 3 stdarg)
- GNU C Library documentation
- 42 intranet ft_printf subject
- Google search resources
- Peer collaboration and code review
- AI tools were used only for reviewing code for potential issues and fixing norminette errors in source files and README
