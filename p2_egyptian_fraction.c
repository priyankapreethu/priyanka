#include<stdio.h>
struct egyptian_fract
{
	int m;
	int d[10];
};

void getInput(int n,struct egyptian_fract frac[n])
{
	for(int i=0;i<n;i++)
	{
		printf("enter how many unit fractions in %d instance\n",i+1);
		scanf("%d",&frac[i].m);
		for(int j=0;j<frac[i].m;j++)
		{
			scanf("%d",&frac[i].d[j]);
		}
	}
}
int main()
{
	int n;
	printf("enter the number of instances\n");
	scanf("%d",&n);
	struct egyptian_fract frac[n];
	getInput(n,frac);
	return 0;
}
