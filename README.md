*This project has been created as part of the 42 curriculum by <ssaghate>*

# ft_printf

## Description
`ft_printf` is a custom implementation of the standard C `printf` function.  
The goal of this project is to reproduce the behavior of `printf` for a subset of conversion specifiers while managing the output correctly and returning the total number of printed characters.

The project focuses on:  
- Handling different types of conversions (`%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, `%%`).  
- Correctly managing unsigned integers, hexadecimal representation, and pointer addresses.  
- Ensuring recursion-based number printing is accurate and efficient.  
- Returning the exact count of printed characters as the original `printf` does.  

## Instructions
### Compilation
```bash
gcc -Wall -Wextra -Werror -c *.c
ar rcs libftprintf.a *.o
