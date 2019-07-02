#include<stdio.h>
#include<string.h>
int main()
{
char pal_tmp[4];
printf("Size of String Variable %d\n",sizeof(pal_tmp));
strcpy(pal_tmp,"123");
printf("Printing Extended Ascii: %s\n",pal_tmp);
printf("Size of String Variable %d\n",sizeof(pal_tmp));
}
