/* input 10 numbers in two array and print the sum */
#include <stdio.h>
int main()
{
	int a[10],b[10],i,j,s=0;

	for(i=0; i<=10; i++)
	{
		printf("\n Enter number in 1st array");
		scanf("%d",&a[i]);

		printf("\n Enter number in 2st array");
		scanf("%d",&b[i]);

	}
	j=9;
	for(i=0; i<=10; i++)
	{
		s=a[i]+b[j];
		printf("\n %d",5);

		j=j-1;
	}
	return 0;
}