// input 10 numbers in an array and printf the sum of all numbers.
#include<stdio.h>
int main()
{
	int n[10],i,s=0;
	for(i=0; i<10; i++)
	{
		printf("\n Enter any number:-");
		scanf("%d",&n[i]);

		s=s+n[i];

	}
	printf("\n Sum=%d",s);

	return 0;
}