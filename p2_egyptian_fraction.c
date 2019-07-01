#include<stdio.h>
struct egyptian_fract
{
	int m;
	int f[10];
};

void getInput(int n,struct egyptian_fract frac[n])
{
	int i,j,m;
	printf("display method\n");
	for(i=0;i<n;i++)
	{
		printf("enter how many unit fractions\n");
		scanf("%d",&m);
		for(int j=0;j<m;j++)
		{
			scanf("%d",&f[j]);
		}
	}
}
int main()
{
	int n;
	printf("enter the number of instances\n");
	scanf("%d",&n);
	struct fraction frac[n];
	getInput(n,frac);
	return 0;
}
