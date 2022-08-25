// write a program to check the given numbers is prime or not?
#include<stdio.h>
int main()
{
	int n,x=2;
printf("enter the number of testing (prime or not):");
scanf("%d",&n);

do
{
	if(n%x == 0)
	{
		printf("\n the number %d is prime",n);
		return 0;
		
		exit(0);
	}

	x++;

}while(x<n);

return 0;
}