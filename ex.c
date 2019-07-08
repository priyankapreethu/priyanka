#include<stdio.h>
void output(int *p)
{
        printf("%d",*p);
        p++;
        printf("%d",*p);
}
void main()
{
	int a[10];
	int *p;
	char str[200];
	a[0]=1;
	a[1]=2;
	p=a;
	scanf("%[^\n]s",str);
	printf("%s",str);
	output(p);
}

