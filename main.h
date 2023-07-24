#ifndef main_h
#define main_h

#include <stdarg.h>
#include <stdlib.h>


int _putchar(char c);
int _putc(va_list c);
int _puts(va_list s);
int print_int(va_list number);
int print_mod(void);
unsigned int get_binary_length(unsigned int num);
int _printb(va_list args);
int print_rev(va_list str);
int print_rot13(va_list R);
int _printf(const char *format, ...);


#endif

