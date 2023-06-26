#include"main.h"
/**
*_puts-printsastring,followedbyanewline,tostdout
*@str:stringtoprint
*/
void_puts(char*str)
{
while(*str!='\0')
{
_putchar(*str++);
}
_putchar('\n');
}

