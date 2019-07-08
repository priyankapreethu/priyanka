#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct palindrome
{
	int len;
	char *str;
};
struct res_str
{
	char rstr[25];
};
void getinput(int n,struct palindrome p[n])
{
	for(int i=0;i<n;i++)
	{
		printf("enter the size of an string\n");
		scanf("%d",&p[i].len);
		p[i].str=(char *)malloc((p[i].len+1)*sizeof(char));
		printf("enter the string\n");
		scanf("%s",p[i].str);
		printf("%s-->%d\n",p[i].str,p[i].len);
	}
}
void string_reverse(int n,char temp[])
{
	char temp2[30];
	printf("%d  len",n);
	int end=n-1;
	for(int i=0;i<n;i++)
	{
		temp2[i]=temp[end];
		printf("%s  ",temp2);
		end--;
	}
	printf("%s ===%s",temp2,temp);
	if(strcmp(temp,temp2)==0)
		printf("%s is palindrome",temp);
	else
		printf("%s is not a palindrome",temp);
	return;
}
void compute(int n,struct palindrome p[n],struct res_str r[n])
{
	printf("compute method\n");
	for(int i=0;i<n;i++)
	{
		string_reverse(p[i].len,p[i].str);
	}
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

