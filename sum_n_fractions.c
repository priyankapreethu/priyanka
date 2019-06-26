#include<stdio.h>
struct frac
{
	int num;
	int den;
};
void getInput(int n,struct frac f[])
{
	printf("enter the %d  fractions\n",n);
	for(int  i=0;i<n;i++)
	{
		scanf("%d %d",&f[i].num,&f[i].den);
	}
}
int computegcd(int a,int b)
{
        int n1,n2;
        n1=a;
        n2=b;
        if (n2 != 0)
               return computegcd(n2, n1%n2);
        else
                return n1;

}
void compute(int n,struct frac f[],struct frac *res)
{
	int gcd,temp=1,temp2=0;
	for(int i=0;i<n;i++)
	{
		temp=temp*f[i].den;

	}
	for(int i=0;i<n;i++)
	{
		f[i].num=f[i].num*(temp/f[i].den);
		temp2=temp2+f[i].num;
	}
	gcd=computegcd(temp,temp2);
	res->num=temp2/gcd;
	res->den=temp/gcd;
}
void output(int n,struct frac f[],struct frac res)
{
	for(int i=0;i<n-1;i++)
	{
		printf("%d/%d + ",f[i].num,f[i].den);
	}
	printf("%d/%d=%d/%d",f[n-1].num,f[n-1].den,res.num,res.den);

}
int main()
{
	int n;
	printf("enter the number of fractions\n");
        scanf("%d",&n);
	struct frac f[n];
        struct frac res;
	getInput(n,f);
	compute(n,f,&res);
	output(n,f,res);
	return 0;
}
