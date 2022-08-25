/*input 10 number in an array and print the summ of only those where tenth place digit is divisible by 5. */
#include <stdio.h>
int main()
{
	/* code */
	int a[10],i,s=0,m,d,e;

	/* Traverse the Array*/
	for(i=0; i<10; i++)
	{
		printf("\n Enter any number:-");
		scanf("%d",&a[i]);
		m=a[i]/10;

		d=m%10;

		e=d%5;

		if(e==0)
			s=s+a[i];
	}

	printf("\n sum of those where tenth place digit is divisible by 5 =%d",s);


	return 0;
}