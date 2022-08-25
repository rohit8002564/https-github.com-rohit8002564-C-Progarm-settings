#include<stdio.h>
int main()
{
	int a,b,c;
	for(a=1; a<=2; a++)

		printf("\n a=%d",a);
	b=a++;
	while(b<=3)
	{
		printf("\n b=%d",b);
		b+=2;


	}
	c=b;
	do
	{
		printf("\n c=%d",c);
		c++;
	}while(c<=5);
	return 0;
}