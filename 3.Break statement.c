#include<stdio.h>
int main()
{
	int a, b;
	for(a=1; a<=6; a++)
	{
		printf("\n a=%d",a);
		
		for(b=1;b<=6; b++)
		{
			printf("\n b=%d",b);
			break;
		}
	}
	return 0;
}