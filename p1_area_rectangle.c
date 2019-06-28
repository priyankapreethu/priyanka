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
float largest(float n1,float n2,float n3)
{
	if(n1>n2&&n1>n3)
		return n1;
	else if(n2>n3&&n2>n1)
		return n2;
	else 
		return n3;
}
void compute(int n,struct rectangle P[],float area[n])
{
	float d1,d2,d3;
	for(int i=0;i<n;i++)
	{
		d1=sqrt(((P[i].v[0].x-P[i].v[1].x)*(P[i].v[0].x-P[i].v[1].x))+((P[i].v[0].y-P[i].v[1].y)*(P[i].v[0].y-P[i].v[1].y)));
                d2=sqrt(((P[i].v[1].x-P[i].v[2].x)*(P[i].v[1].x-P[i].v[2].x))+((P[i].v[1].y-P[i].v[2].y)*(P[i].v[1].y-P[i].v[2].y)));
                d3=sqrt(((P[i].v[0].x-P[i].v[2].x)*(P[i].v[0].x-P[i].v[2].x))+((P[i].v[0].y-P[i].v[2].y)*(P[i].v[0].y-P[i].v[2].y)));
		printf("d1===%f\n",d1);
		printf("d2===%f\n",d2);
		printf("d3===%f\n",d3);
		float large =largest(d1,d2,d3);
		printf("large==%f\n",large);
		if(large==d1)
		{		
			area[i]=d2*d3;
		}
		else if(large==d2)
		{
			area[i]=d1*d3;
		}
		else
		{
			area[i]=d1*d2;
		}
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
		printf(" is %f\n",area[i]);
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
