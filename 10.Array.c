/* input 10 numbers in an Array and find the maximum and minimum numbers */
#include<stdio.h>
int main()
{
	int n[10],i,max=0,min=0;
	for(i=0; i<10; i++)
	{
		printf("Enter any number:-");
		scanf("%d",&n[i]);
	}

	min=n[0]; max=n[0];
	for(i=1; i<10; i++)
	{
		if(max<n[i])
			max=n[i];
		if(min>n[i])
			min=n[i];

	}
	
	printf("\n maximum number=%d",max);
	printf("\n minimum number=%d",min);
	return 0;
}