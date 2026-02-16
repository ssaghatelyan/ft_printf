#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int  ft_printf(const char *format, ...);

int  print_char(int c);
int  print_str(char *str);
int  ft_print_pointer(void *ptr);
int  ft_print_int(int n);
int  ft_print_unsigned_int(unsigned int n);
int  ft_print_hex(unsigned long nb, char case_);

#endif
