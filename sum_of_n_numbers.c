#include<stdio.h>
void input(int *n,int *p)
{
        printf("enter the size of array\n");
        scanf("%d",n);
        printf("enter %d elements\n",*n);
        for(int i=0;i<*n;i++)
        {
                scanf("%d",p);
                p++;
        }
}
void sum(int n,int *p,int *res)
{
        for(int i=0;i<n;i++)
        {
                *res+=*p;
                printf("p val=%d===%d",*p,*res);
                p++;
        }
        printf("%d",*res);
}
void output(int n,int *p,int res)
{
        for(int i=0;i<n-1;i++)
        {
                printf("%d",*p)
                p++;
        }
        printf("%d=%d",*p,res);
}
int main()
{
        int *p,n,a[10],res=0;
        p=a;
        input(&n,p);
        sum(n,p,&res);
        output(n,p,res);
}

