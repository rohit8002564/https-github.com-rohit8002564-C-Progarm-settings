#include<stdio.h>
int main()
{
	/* creating an integer array */
	/* named array of size 5. */
	int a[5];
	int b[5];
	int c[5];

	int i;

    for(i=0; i<5; i++)
	{
		a[i]=i+100;
	}

	printf("value of array A:\n");
	for(i=0; i<5; i++)
	{
		printf("%d ",a[i]);
	}


	for(i=0; i<5; i++)
	{
		b[i]=i+200;
	}

	printf("value of array B:\n");
	for(i=0; i<5; i++)
	{
		printf("%d  ",b[i]);
	}
	


	for(i=0; i<5; i++)
	{
		c[i]=a[i]+b[i];

	}

	printf("value of array C:\n");
	for(i=0; i<5; i++)
	{
		printf("%d  ",c[i]);
	}
	

	for(i=0; i<5; i++)
	{
		/* print value at i */
		/* index we get the output as 300 302 304 306 308 */
		printf("%d ",c[i]);
	}

	return 0;


}