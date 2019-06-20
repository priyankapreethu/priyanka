
#include<stdio.h>
int getgcd(int a,int b)
{
	int n1,n2;
	n1=a;
	n2=b; 
	if (n2 != 0)
	{
       		printf("%d,%d/%d",n1,n1,n2);
		return getgcd(n2, n1%n2);
	}
	else 
       		return n1;
}
int main()
{
	int a,b,c;
	a=12;b=9;
	c=getgcd(a,b);
	printf("%d",c);
	return 0;
}
