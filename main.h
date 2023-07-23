#ifndef main_h
#define main_h

#include <stdarg.h>
#include <stdlib.h>


int _putchar(char c);
int _putc(va_list c);
int _puts(va_list s);
int print_int(va_list number);
int print_mod(void);
size_t get_binary_length(size_t num);
int _printb(va_list args);
int _printf(const char *format, ...);


#endif

