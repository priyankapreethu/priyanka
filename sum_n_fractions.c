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
int gcd(int a,int b)
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
int getGcd(struct frac *f,int n)
{	int gcd;
	gcd=f->den;
	printf("%d",f->den);
	for (i=0;i<n;i++)
	{
		f++;
		printf("f is %d  gcd is %d \n",gcd,f->den);
		gcd=gcd(f->den,gcd);
	}
	return gcd;
}
void compute(struct frac *f,int n)
{
	int gcd;
	gcd=getGcd(f,n);
	printf("%d",f->den);
}	
int main()
{
	int n;
	struct frac f[10];
	struct frac *f1;
	f1=f;
	getInput(f1,&n);
	/*for(int  i=0;i<n;i++)
        {
                printf("%d/%d\t",f1->num,f1->den);
                f1++;
        }*/
	compute(f1,n);
	return 0;
}
