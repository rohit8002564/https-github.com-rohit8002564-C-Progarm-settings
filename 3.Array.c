#include<stdio.h>
int  main()
{
	/* creating an integer array */
	/* named array of size 5. */
	int a[5];
	int i = 0;

	for(i = 0; i<5; i++)
	{
		a[i]= i+100;

	}
	for(i=0; i<5; i++)
	{
		/* print value at i */
		/* index we get the output as 100 101 102 103 104 */
		printf("%d ",a[i]);

	}
	return 0;
}