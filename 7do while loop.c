//evaluate the series such as 1+2+3+...i. use do-while loop.
#include <stdio.h>
int main ()
{ 
	int i, a=1;
	int s=0;

	printf("\n Enter a number:");
	scanf("%d",&i);

	do
	{
		printf("%d+",a);
		s=s+a;
		a++;
		
	}while(a<=i);
	printf("\b\b s=%d",s);

	return 0;
}