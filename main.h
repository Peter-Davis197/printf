#ifndef _MAIN_
#define	_MAIN_
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/**
 * typedef struct fmt fmt_t - Struct op
 *
 * @fmt: The format.
 * @fm_t: The function associated.
 */

typedef struct fmt fmt_t;

int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size);

/**
  *struct print_func - holds fromat specifiers and their functions.
  *@placeholder: char.
  *@f: function pointer.
  *
  */

typedef struct print_func
{
	char placeholder;
	int (*f)(va_list, int);
} func;

int _putchar(char c);

int _printf(const char *format, ...);

int (*get_func(char c))(va_list, int);

int print_char(va_list, int);

int print_str(va_list, int);

int print_rev(va_list, int);

int print_int(va_list, int);

int _putchar_int(int, int);

int print_numbers(unsigned long n, unsigned int base, const char *digits);

unsigned int find_length(unsigned int, int);

int print_hex(va_list list, int length);

int print_Hex(va_list list, int length);

int print_unsig(va_list list, int length);

int print_octal(va_list list, int length);

int print_rot13(va_list list, int length);

int print_b(va_list list, int length);

int print_binary(unsigned int, int);

int print_Str(va_list list, int length);
#endif
