#include<stdio.h>
void input(int *n,int *p)
{
        printf("enter the size of array\n");
        scanf("%d",n);
        printf("enter %d elements\n",n)
        for(int i=0;i<n;i++)
        {
                scanf("%d",p);
                p++;
        }
}
int main()
{
        int *p,n,a[10],res;
        p=a;
        input(int &n,p);
        for(int i=0;i<n;i++)
                printf("%d",p++);
        //sum(n,p,&res);
        //output(n,p,res);
}