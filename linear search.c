/* search any particular item in an array through linear search */

#include<stdio.h>
int main()
{
	int n[10], i,c=0,num;
	for(i=0; i<10; i++)
	{
		printf ("Enter any number:-");
		scanf("%d",&n[i]);


	}
	// searching starts
	  printf ("\n Enter searching elements:-");
	  scanf("%d",&num);

	  for(i=0; i<10; i++)
	  {
	  	if(num==n[i])
	  	{
	  		printf ("number exit in an array:-");
	  		c=1;
	  		break;
	  	}

	  }

	  if(c==0)
	  	printf ("\n number does not exit an array:-");
	return 0;  
}
