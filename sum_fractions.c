#include<stdio.h>
struct frac
{
        int num;
        int den;
};
void input(struct frac *f1,struct frac *f2)
{
        printf("enter the first fraction\n");
        scanf("%d%d",&f1->num,&f1->den);
        printf("enter the second fraction");
        scanf("%d%d",&f2->num,&f2->den);
        printf("%d/%d\n",f1->num,f1->den);
        printf("%d/%d\n",f2->num,f2->den);
}
void getgcd( int a,int b,int * gcd)
{
	int n1=a;
        int n2=b;
	while(n1!=n2)
	{
		if(n1>n2)
			n1-=n2;
		else
			n2-=n1;
	}
	*gcd=n1;

}
void frac_sum(struct frac f1,struct frac f2,struct frac *res )
{
	int gcd,temp;
	getgcd(f1.den,f2.den,&gcd);
	printf("gcd is %d",gcd);
	temp =f1.num*gcd;
	temp/=f1.den;
	res->num=f2.num*gcd;
	res->num/=f2.den;
	res->num+=temp;
	res->den=(f1.den*f2.den)/gcd;
	printf("%d/%d",res->num,res->den);

}
int main()
{
	struct frac n1,n2,sum;
        input(&n1,&n2);
        printf("%d/%d\n",n1.num,n1.den);
        printf("%d/%d\n",n2.num,n2.den);
	frac_sum(n1,n2,&sum);
	return 0;
	
}


