#include<stdio.h>
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

/*void compute(int n,struct rectangle P[])
{
	
}*/
void output(int n,struct rectangle P[n])
{
	int area=0;
	for(int i=0;i<n;i++)
	{
		printf("area of a rectangle with vertices ");
		for(int j=0;j<3;j++)
		{
			printf("(%0.1f,%0.1f),",P[i].v[j].x,P[i].v[j].y);
		}
		printf(" is %d\n",area);
	}
}
int main()
{
	int n;
	printf("enter the number of rectangles\n");
	scanf("%d",&n);
	struct rectangle P[n];
	getInput(n,P);
	//compute(n,P);
	output(n,P);
}
