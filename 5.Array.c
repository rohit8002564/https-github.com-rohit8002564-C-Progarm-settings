#include <stdio.h>
int main()
{
	int a[3][3];
	int i,j;

	int m=0;
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			a[i][j]=m;
			m++;

		}

	}
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");

	}
	return 0;

}