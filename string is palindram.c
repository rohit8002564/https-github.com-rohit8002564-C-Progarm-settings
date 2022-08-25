// write a c program to check wheather a string is palindrom or not
#include <stdio.h>
int main ()
{
	char str[60];
	int a, i, b=0;
	printf("Enter a string\n:");
	gets(str);

	a = strlen(str);
	for(i=0; i<a/2; i++)
	{
		if(str[i] == str[a-i-1])
			b++;
	}
	if(b==i)
		printf("string is palindrome");
	else
		printf("string is not palindrome");
	return 0;
}