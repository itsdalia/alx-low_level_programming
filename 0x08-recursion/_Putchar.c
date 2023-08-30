#include <unistd.h>
/**
 * This is my _Putchar.c
 */
int _Putchar(char c)
{
return write(STDOUT_FILENO, &c, 1);
}
