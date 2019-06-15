#include<stdio.h>
struct frac
{
        int num;
        int den;
};
void input(struct frac *f1,struct frac *f2)
{
        printf("enter the first fraction\n");
        scanf("%d%d",f1->num,f2->den);
        printf("enter the second fraction");
        scanf("%d%d",f2->num,f2->den);
        printf("%d/%d/n",f1->num,f1->den);
        printf("%d/%d/n",f2->num,f2->den);
}
int main()
{
        struct frac f1,f2,res;
        input(&f1,&f2);
        return 0;
}


