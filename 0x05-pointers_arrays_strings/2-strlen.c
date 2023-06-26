#include"main.h"
/**
*_strlen-returnsthelengthofastring
*@s:string
*Return:length
*/
int_strlen(char*s)
{
intlongi=0;

while(*s!='\0')
{
longi++;
s++;
}

return(longi);
}

