/* interachange adjacent elements of an array */
#include<stdio.h>
int main()
{
	int num[]={12,4,5,1,9,13, 11, 19,54,34};
	int i,j;

	for(i=0; i<=9; i=i+2)
	{
		j=num[i];
		num[i]=num[i+1];
		num[i+1]=j;
	}

	for(i=0; i<=9; i++)
	
		printf("%d\t",num[i]);
	
	return 0;
}