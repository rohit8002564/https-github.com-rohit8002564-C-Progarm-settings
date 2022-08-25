#include <stdio.h>
int main()
{
	int i,j,k,n = 0;

	for(i=0; i<4; i++)
	{
		
			for(j=3; j>i; j--)

				printf("");
			for(k=0; k<=i; k++)
			{
				n++;
				printf(" %d",n);
				printf("\n");
			}
		
	}
	return 0;
}