/* create an integer array and store the table of 5 at least print it.*/
#include<stdio.h>
int main()
{
	int b[10],i,j=1;

	for(i=0; i<10; i++)
	{
		b[i]=5*j;
		j++;
	}
	printf("\n\t\t\t Table of five:-");

	for(i=0; i<10; i++)
	{
		printf("\n %d",b[i]);

	}
	return 0;
}