#include <stddef.h>
#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int)); 
void print_value(int val);
void print_elem(int elem);
void print_elem_hex(int elem);

#endif /*  _FUNCTION_POINTERS_H_ */
