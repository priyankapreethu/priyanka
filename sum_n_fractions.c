#include<stdio.h>
struct frac
{
	int num;
	int den;
};
void getInput(struct frac *f,int *n)
{
	printf("enter the number of fractions\n");
	scanf("%d",n);
	printf("enter the %d  fractions\n",*n);
	for(int  i=0;i<*n;i++)
	{
		scanf("%d %d",&f->num,&f->den);
		f++;
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
void compute(struct frac *f,int n,struct frac *res)
{
	int gcd,temp=1,temp2=0;
	struct frac *f2=f;
	for(int i=0;i<n;i++)
	{
		temp=temp*f->den;	
		f++;
	}
	for(int i=0;i<n;i++)
	{
		f2->num=f2->num*(temp/f2->den);
		temp2=temp2+f2->num;
 		f2++;
	}
	gcd=computegcd(temp,temp2);
	res->num=temp2/gcd;
	res->den=temp/gcd;
}
void output(struct frac res)
{
	   printf("%d/%d",res.num,res.den);

}
int main()
{
	int n;
	struct frac f[10];
	struct frac *f1;
	struct frac res;
	f1=f;
	getInput(f1,&n);
	compute(f1,n,&res);
	output(res);
	return 0;
}
