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
	a[0]=1;
	a[1]=2;
	p=a;
	output(p);
}

