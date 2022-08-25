//case:3countinue statement
#include <stdio.h>
int main()
{
	int a,b;
	for(a=1; a<=5; a++)
	{
		printf("\n a=%d",a);
		for(b=1; b<=5; b++)
		{
			printf("\n b=%d",b);
			continue;
			printf("\n Inner");
		}
				break;
		printf("\n outer");
	}
	return 0;
}