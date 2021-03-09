#include<stdio.h>
/*int recursive(int num)//printing first 50 natural numbers using recursion
{
	if(num<=50)
	{
		printf("%d\n",num);
		recursive(num +1);
	}
}
int main()
{
	int n=1;
	recursive(n);
	return 0;
}*/
int recursion2(int num)
{
	int c=0;
	int a=1; 
	if(a<=num)
	{
		c=c+a;
	}
	recursion2(num-1);
}
int main()
{
	int num;
	printf("enter limit");
	scanf("5d",&num);
	recursion2(num);
	return 0;
}
/*let us modify this now
this is another modification*/
