//compute the factorial of given number using do while loop.
#include <stdio.h>
int  main()
{
	int a, fact = 1; 
	printf("Enter the number");
	scanf("%d",&a);

	do{
		printf("%d*",a);
		fact=fact*a;

		a--;
	}while(a>=1);

    printf("=%d",fact);
    printf("\n factorial of Given number is %d ",fact);
    

	return 0;
}