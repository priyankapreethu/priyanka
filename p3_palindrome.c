#include<stdio.h>
#include<string.h>
struct palindrome
{
	int len;
	char str[25];
};
struct res_str
{
	char rstr[25][25];
};
void getinput(int n,struct palindrome p[n])
{
	for(int i=0;i<n;i++)
	{
		printf("enter the string\n");
		scanf("%s",p[i].str);
		p[i].len=strlen(p[i].str);
		printf("%s-->%d\n",p[i].str,p[i].len);
	}
}
void compute(int n,struct palindrome p[n],struct res_str r[n])
{
	printf("compute method");

}
void output(int n,struct palindrome p[n])
{
	for(int i=0;i<n;i++)
        {
                printf("%s\n",p[i].str);
        }
}
int main()
{
	int n;
	printf("enter the number of strings\n");
	scanf("%d",&n);
	struct palindrome p[n];
	struct res_str r[n];
	getinput(n,p);
	compute(n,p,r);
	output(n,p);
	return 0;
}
