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
        res->den=(f1.den*f2.den)/gcd;
        temp =f1.num*res->den;
        temp/=f1.den;
        res->num=f2.num*res->den;
        res->num/=f2.den;
        res->num+=temp;

}
void output(struct frac n1,struct frac n2,struct frac res)
{
          printf("%d/%d+%d/%d=%d/%d",n1.num,n1.den,n2.num,n2.den,res.num,res.den);
}
int main()
{
        struct frac n1,n2,sum;
        input(&n1,&n2);
        frac_sum(n1,n2,&sum);
        output(n1,n2,sum);
        return 0;

}
