// the number in increasing and decreasing order using infinite for loop.
#include<stdio.h>
int main()
{
	int n,a,b;
	printf("\n Enter the number:-");
	scanf("%d",&n);

	a=b=n;

	printf("(++)(--)\n");

	printf("======= ===== ==");
	for(;;(a++,b--))
	{
		printf("\n %d \t %d",a,b);
		if(b == 0)
			break;
	}

	return 0;
}
