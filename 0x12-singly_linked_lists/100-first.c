#include <stdio.h>

void __attribute__((constructor)) otek(void);

/**
 * otek - Prints a string before the main funcion is
 * executed by applying constructor attribute
 */
void otek(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
