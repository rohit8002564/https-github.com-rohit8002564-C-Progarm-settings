// write a program to create the following menu on the screen:-MAIN MENU,ADD,SUB,MULT,DIV,MOD,EXIT.
#include<stdio.h>
#include<string.h> /*for exit () functiom */
int main()
{
	int a,b,c,ch;
	printf("\n\t\t\t\t MAIN MENU");
	printf("\n 1.ADD");
	printf("\n 2.SUB");
	printf("\n 3.MULT");
	printf("\n 4.DIV");
	printf("\n 5. MOD");
	printf("\n 6.EXIT");

	printf("\n Enter your choice:");
	scanf("%d",&ch);

	switch(ch)
	{
		case1:
		{
			printf("\n enter two number");
			scanf("%d %d",&a,&b);
			c=a+b;
			printf("\n ADD = %d",c);
			break;

		}
		case2:
		{
			printf("\n enter two number");
			scanf("%d %d",&a,&b);
			c=a-b;
			printf("\n SUB = %d ",c);
			break;

		}
		case3:
		{
			printf("\n enter two number");
			scanf("%d %d",&a,&b);
			c=a*b;
			printf("\n MULT = %d",c);
			break;
		}
		case4:
		{
		printf("\n enter two number");
		scanf("%d %d",&a,&b);
		c=a/b;
		printf("\n DIV = %d",c);
		break;
	    }
		
	case5:
	{
		printf("\n enter two number");
		scanf("%d %d",&a,&b);
		c=a%b;
		printf("MOD = %d",c);
		break;
	}
	default:
	{
		printf("\n invalid choice,try again ");
	}

	return 0;
 }

}



