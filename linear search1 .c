/* Linear search in C to find whether a number is present in an array*/
#include <stdio.h>
int main()
{
	int arr[50],search, c,n;

	printf("Enter number of element in array:-");
	scanf("%d",&n);

	printf("Enter %d integer(s)\n ",n);

	for(c=0; c<n; c++)
		scanf("%d",&arr[c]);

	printf("Enter number ot search\n ");
	scanf("%d",&search);

	for(c=0; c<5; c++)
	{
		if(arr[c]==search)   /* If required element is found */
		{
			printf("%d present at location %d", search,c+1);
		     break;
		}
		 if(c == n)
		 {
		 	printf("%d is not present in the array",search);
		 }  


	}
	return 0;


}