#include<stdio.h>
struct frac
{
        int n;
        int d;
};
void input(struct *f1,struct *f2)
{
        printf("enter the first fraction\n");
        scanf("%d%d",f1->n,f2->d);
        printf("enter the second fraction");
        scanf("%d%d",f2->n,f2->d);
        printf("%d/%d/n"f1->n,f1->d);
        printf("%d/%d/n",f2->n,f2->d);
}
int main()
{
        struct frac f1,f2,res;
        void input(&f1,&f2);
        return 0;
}
