// print the entered num in reverse order.use do-while loop.also perform sum and multiplication with thie digits.
#include <stdio.h>
int main()
{
	int n,d,x=1, mul = 1, sum = 0;
	int i;

	printf("enter the num of digits:-");
	scanf("%d",&d);

	printf("\n enter the number of wich to be reversed:-");
	scanf("%d",&n);

	printf("\n Reversed number");

	do
	{
		i = n%10;
		printf("%d",i);
		sum = sum + i;
		mul = mul*i;
		n = n/10;
		x++;
	}while(x<=d);

	printf("\n Addtion of digits:-%4d",sum);
	
	printf("\n multiplication of digits:-%4d",mul);

	return 0;
}