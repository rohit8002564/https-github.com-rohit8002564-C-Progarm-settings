//operators
#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter value of a and b\n:");
	scanf("%d%d",&a,&b);
	printf("the arithmetic operators result is %d%d%d%d%d\n",a+b,a-b,a*b,a/b,a%b);
	
	printf("the relation operators result is %d%%d%d%d\n",a>b,a<b,a<=b,a>=b);
	
	printf("the logical operators result is %d%d%d%d\n",a&&b,a||b,!(a==b));
	
	printf("the increment operators result is %d%d%d%d\n",a++,b++,++a,++b);
	
	printf("the decrement operators result is %d%d%d%d\n",a--,b--,--a,--b);
	
	printf("the bitwise AND operators result is %d\n",a&b);
	
	printf("the bitwise OR operators result is %d\n",a|b);
	
	printf("the bitwise NOT operators result is %d\n",a^b);
	
	return 0;
	
}