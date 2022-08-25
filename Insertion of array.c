// Program to insert an element in array at specified  position.
#include<stdio.h>
int main()
{
	int array[100],i,n,value,position;
	printf("Enter number of element in array:-");
	scanf("%d",&n);

	printf("Enter %d elements\n",n);
	for(i=0; i<n; i++)
		scanf("%d",&array[i]);

	printf("Enter the location where you wish to insert an element\n");
	scanf("%d",&position);
	printf("Enter the value of insert \n");

	printf("%d",&value);
	for(i=n-1; i>=position-1; i--)
		array[i+1] = value;

		printf("Resultant array is\n");
		for(i=0; i<=n; i++) 
			printf("%d\n",array[i]);
		return 0;

	                  
} 