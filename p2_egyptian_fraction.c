#include<stdio.h>
#include<stdlib.h>
struct egyptian_fract
{
	int m;
	int *d;
};
struct res_fraction
{
	int num;
	int den;
};
void getInput(int n,struct egyptian_fract frac[n])
{
	for(int i=0;i<n;i++)
	{
		printf("enter how many unit fractions in %d instance\n",i+1);
		scanf("%d",&frac[i].m);
		frac[i].d=(int *)malloc(frac[i].m*sizeof(int));
		for(int j=0;j<frac[i].m;j++)
		{
			scanf("%d",&frac[i].d[j]);
		}
	}
}
int getgcd(int n1,int n2)
{
        int a,b;
        a=n1;
        b=n2;
        if (b != 0)
               return getgcd(b, a%b);
        else
               return a;
}

void compute(int n,struct egyptian_fract frac[n],struct res_fraction r[n])
{
	for(int i=0;i<n;i++)
	{
		int temp1=1;
		int temp2=0;
		int gcd;
		for(int j=0;j<frac[i].m;j++)
		{
			temp1*=frac[i].d[j];
		}
		for(int j=0;j<frac[i].m;j++)
                {
                       	temp2+=temp1/(frac[i].d[j]);
                }
		gcd=getgcd(temp1,temp2);
		r[i].num=temp2/gcd;
		r[i].den=temp1/gcd;
	}
}
void output(int n,struct egyptian_fract frac[n],struct res_fraction r[n])
{
	for(int i=0;i<n;i++)
        {
                for(int j=0;j<frac[i].m;j++)
                {
			printf("1/%d+",frac[i].d[j]);
                }
		printf("=%d/%d\n",r[i].num,r[i].den);
	}
}
void freeresource(int n,struct egyptian_fract frac[n])
{
	for(int i=0;i<n;i++)
		free(frac[i].d);
}
int main()
{
	int n;
	printf("enter the number of instances\n");
	scanf("%d",&n);
	struct egyptian_fract frac[n];
	struct res_fraction r[n];
	getInput(n,frac);
	compute(n,frac,r);
	output(n,frac,r);
	freeresource(n,frac);
	return 0;
}
