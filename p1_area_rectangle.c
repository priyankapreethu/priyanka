#include<stdio.h>
#include<math.h>
struct vert
{
	float x;
	float y;
};
struct rectangle
{
	struct vert v[3];
};
void getInput(int n,struct rectangle P[n])
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%f%f",&P[i].v[j].x,&P[i].v[j].y);
		}
	}
}
void smallest(float n1,float n2,float n3,float *s1,float *s2)
{
	if(n1>n2&&n1>n3)
	{
		*s1=n2;
		*s2=n3;
	}
	else if(n2>n3)
	{
		*s1=n1;
		*s2=n3;
	}
	else 
	{
		*s1=n1;
		*s2=n2;
	}
}
void compute(int n,struct rectangle P[n],float area[n])
{
	float d1,d2,d3,s1,s2;
	for(int i=0;i<n;i++)
	{
		d1=sqrt(((P[i].v[0].x-P[i].v[1].x)*(P[i].v[0].x-P[i].v[1].x))+((P[i].v[0].y-P[i].v[1].y)*(P[i].v[0].y-P[i].v[1].y)));
                d2=sqrt(((P[i].v[1].x-P[i].v[2].x)*(P[i].v[1].x-P[i].v[2].x))+((P[i].v[1].y-P[i].v[2].y)*(P[i].v[1].y-P[i].v[2].y)));
                d3=sqrt(((P[i].v[0].x-P[i].v[2].x)*(P[i].v[0].x-P[i].v[2].x))+((P[i].v[0].y-P[i].v[2].y)*(P[i].v[0].y-P[i].v[2].y)));
		smallest(d1,d2,d3,&s1,&s2);
		area[i]=s1*s2;
	}
}
void output(int n,struct rectangle P[n],float area[n])
{
	for(int i=0;i<n;i++)
	{
		printf("area of a rectangle with vertices ");
		for(int j=0;j<3;j++)
		{
			printf("(%0.1f,%0.1f),",P[i].v[j].x,P[i].v[j].y);
		}
		printf(" is %0.1f\n",area[i]);
	}
}
int main()
{
	int n;
	printf("enter the number of rectangles\n");
	scanf("%d",&n);
	struct rectangle P[n];
	float area[n];
	getInput(n,P);
	compute(n,P,area);
	output(n,P,area);
}
