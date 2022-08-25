// matrix [3][4]
#include<stdio.h>
int main()
{
	int a[3][4];
	int i,j;
	int m=0;

	for(i=0; i<=3; i++)
	{
		for(i=0; i<=4; i++)
			a[i][j]=m;
		m++;

	}
	for(i=0; i<=3; i++)
	{
		for(i=0; i<=4; i++)
		{
			printf("%d ",a[i][j]);

		}
		printf("\n");
	}
	return 0;
}