#include <stdio.h>
/**
 * my_startup - prints message before main function is executed
 *
 */
void my_startup(void) __attribute((constructor));

void my_startup(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
