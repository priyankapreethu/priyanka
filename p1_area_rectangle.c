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
void getInput(int n,struct rectangle P[])
{
	int i,j;
	for(i=0;i<n;i++);
	{
		for(j=0;j<3;j++)
		{
			scanf("%d%d",P[i].v[j].x,P[i].v[j].y);
		}
	}
}
int main()
{
	int n;
	printf("enter the number of rectangles\n");
	scanf("%d",&n);
	struct rectangle P[n];
	getInput(n,P);
}
