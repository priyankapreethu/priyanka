#include<stdio.h>
struct frac
{
	int nume;
	int deno;
};
void input(struct frac *f1,struct frac *f2)
{       printf("enter the first number numerator/denominator");
	scanf("%d%d",&f1->nume,&f1->deno);
	printf("enter the second number numerator/denominator");
	scanf("%d%d",&f2->nume,&f2->deno);
}

int findGcd(struct frac *f1,struct frac *f2)
{
	int n1,n2;
	n1=f1->deno;
	n2=f2->deno;
	while(n1!=n2)
	{
		if(n1>n2)
			n1-=n2;
		else
			n2-=n1;
	}
	return n1;
}
void add(struct frac *f1,struct frac *f2,struct frac *res)
{
	if(f1->deno==f2->deno)
	{
		res->deno=f1->deno;
		res->nume=f1->nume+f2->nume;
	}
	else
	{
		int gcd;
		gcd=findGcd(f1,f2);
		res->deno=(f1->deno*f2->deno)/gcd;
		res->nume=(f1->nume*f2->deno)+(f2->nume*f1->deno);
	}
}
void output(struct frac *f1,struct frac *f2,struct frac *res)
{
	printf("sum of two fractions iss\n");
	printf("%d/%d + %d/%d = %d/%d",f1->nume,f1->deno,f2->nume,f2->deno,res->nume,res->deno);
}



void main()
{
	struct frac f1[1];
	struct frac f2[1];
	struct frac res[1];
	input(f1,f2);
	add(f1,f2,res);
	output(f1,f2,res);
	return;

