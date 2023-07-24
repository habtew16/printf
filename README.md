# _printf

## Table of Contents
1. [Description](#description)
2. [How to Use](#how-to-use)
3. [Supported Conversion Specifiers](#supported-conversion-specifiers)
4. [Function Descriptions](#function-descriptions)
5. [Example Usage](#example-usage)
6. [Contributors](#contributors)

## Description
The Custom _printf project is an implementation of the standard C library function `printf`, which is used for formatted output to the standard output stream. This custom version, `_printf`, provides similar functionality to the standard `printf` function and supports various format specifiers.

## How to Use
To use the custom `_printf` function in your C code, follow these steps:
1. Include the "main.h" header file in your C source file.
2. Call the `_printf` function in your code with the desired format string and arguments.

## Supported Conversion Specifiers
The custom `_printf` function supports the following conversion specifiers:
- `%c` : Character
- `%s` : String
- `%i` or `%d` : Integer (signed decimal)
- `%u` : Unsigned Integer (unsigned decimal)
- `%r` : Reverse the string (Rot13 encoding)
- `%b` : Binary
- `%R` : Rot13 encoding

## Function Descriptions
1. `int _putchar(char c);`: This is function used to write character to standard ouput by using unistd library

2. `int _putc(va_list c);`: This function is used to convert formated character and print it to standard output and returns count of characters printed

3. `int _puts(va_list s);`: This function is used to convert formated string and print it to standard output

4. `int print_int(va_list number);`: This is the function used to convert and print decimals and integers and decimals

5. `int print_mod(void);`: This funnction prints second `%` if it comes after `%`

6. `unsigned int get_binary_length(unsigned int num);`: This finction will get the length of binary printed to std output

7. `int _printb(va_list args);`: This function will print binary by using binary length from `get_binary_length` function

8. `int print_rev(va_list str);`: This will reverse given string and print it out

9. `int print_rot13(va_list R);`: Prints string in Rot13 enncoding from `va_list`

10. `int _printf(const char *format, ...)`: This is the main function for formatted output. It takes a format string `format` and optional arguments, similar to `printf`.


## Example Usage
```c
#include "main.h"
#include <stdio.h>

int main(void)
{
    char *name = "John";
    int age = 25;

    _printf("Name: %s, Age: %d\n", name, age);

    return (0);
}
```
## ouput
```c
Name: John, Age: 25

```

## Contributors
- [Habtamu Gebre](https://github.com/habtew16)
- [Sophia Odioko](https://github.com/Eloho23)
