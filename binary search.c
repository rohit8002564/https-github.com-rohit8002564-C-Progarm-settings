// write a program to search any particular though binary search.
#include <stdio.h>
int main()
{
	int n[10],i,low,high,mid,s,num;
     for(i=0; i<10; i++)
     {
       printf("\n Enter any number:-");
       scanf("%d",&n[i]);

     }

     // Searching starts
     printf("\n Enter searching elements:-");
     scanf("%d",&num);
     low = 0;
     high = 9;
     mid = (low+high)/2;

     while(low==high&&num!=n[i])
     {
     	if(num<n[mid])
     	{
     		high=mid-1;
     	}
     	else
     	{
     		low=mid+1;
     	}

     	mid = (low+high)/2;
     }
     if(num==n[mid])
     	printf("\n Enter found");
     else
     	printf("\n number does not found");
     
     return 0;


	
}