// Program to delete an element from an array at pecific postion.
#include<stdio.h>
int main()
{
	int arr[100],i,position,n;
	printf("Enter number of elements in array\n");
	scanf("%d",&n);

	printf("Enter %d  number of elements\n ",n);
	for(i=0; i<n; i++)
		scanf("%d",&arr[i]);

	printf("Enter the location where you wish to delete element\n");
	scanf("%d",&position);

	if(position>=n+1)
		printf("Deletion not possible \n");
	else
	{
		for(i=position-1; i<n-1; i++)
			arr[i] = arr[i+1];
		printf("Resultant array is\n");
		for(i=0; i<n-1; i++)
			printf("%d\n",arr[i]);
}
return 0;

}