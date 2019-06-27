#include<stdio.h>
struct vert
{
	float x;
	float y;
};
void getInput(int n,struct vert P[][])
{
	for(int i=0;i<n;i++);
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d%d",P[i][j].x,P[i][j].y);
		}
	}
}
int main()
{
	int n;
	printf("enter the number of rectangles\n");
	scanf("%d",&n);
	struct vert P[n][3];
	getInput(n,P);
}
