#include<stdio.h>
struct palindrome
{
	int len;
	char str[25];
};
void getinput(int n,struct palindrome p[n])
{
	for(int i=0;i<n;i++)
	{
		printf("enter the length\n");
		scanf("%d",&p[i].len);
		scanf("%s",p[i].str);	
	}
}
int main()
{
	int n;
	printf("enter the numbe`r of strings\n");
	scanf("%d",&n);
	struct palindrome p[n];
	getinput(n,p);
	return 0;
}
