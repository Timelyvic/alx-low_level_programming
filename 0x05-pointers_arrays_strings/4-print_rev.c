#include"main.h"
/**
*print_rev-imprimeenreversa
*@s:string
*return:0
*/
voidprint_rev(char*s)
{
intlongi=0;
into;

while(*s!='\0')
{
longi++;
s++;
}
s--;
for(o=longi;o>0;o--)
{
_putchar(*s);
s--;
}

_putchar('\n');
}

