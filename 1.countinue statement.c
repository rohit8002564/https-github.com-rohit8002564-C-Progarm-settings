//case;2 countinue statement
#include<stdio.h>
int main()
{
	int a;
	for(a=1; a<=5; a++)
	{
		printf("\n a=%d",a);
		if(a==3)
		{
			continue;
		}
		printf("Rohit");
	}
	return 0;


}