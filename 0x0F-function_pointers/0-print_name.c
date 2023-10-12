#include "function_pointers.h"


/**
 *
 *print_name - is a fumction to print a name
 *
 *@name : is the name to be printed
 *
 *@(*f)(char*) is the pointer to function to print the name
 */


void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
