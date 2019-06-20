#include<stdio.h>
struct frac
{
	int num;
	int den;
}
void getInput(struct frac *f,int *n)
{
	printf("enter the number of fractions\n");
	scanf("%d",n);
	for(int  i=0;i<*n;i++)
	{
		scanf("%d %d",&f->num,&f->den);
		f++;
	}
}
void main()
{
	int n;
	struct frac f[10];
	struct frac *f1;
	f1=f;
	void getInput(f1,&n);
	for(int  i=0;i<*n;i++)
        {
                printf("%d /%d\t",f->num,f->den);
                f++;
        }

	
}
