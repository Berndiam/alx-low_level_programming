#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - This prints the strings that is followed by a new line.
* @separator: Shows the string to be printed between the strings.
* @n: The number of strg that is passed to the function.
* @...: A var number of strings to print.
*
* Description: If the separator is NULL, it will not be printed
* If one of the strings is NULL, (nil) is printed instead.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
