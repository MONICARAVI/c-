/*  Given two numbers A and B. The program must find square numbers which lie between A and B inclusive.
INPUT 18 100
OUTPUT 25 36 49 64 81 100
*/
/* Traverse one by one till you find a perfect square number. Once found then find successive square numbers by just incrementing the SQRT value of it*/
#include<stdio.h>
#include<math.h>

int is_square(int n)
{
	if(sqrt(n)==floor(sqrt(n)))
		return 1;
	return 0;	
}

int main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	while(a<=b)
	{
		if(is_square(a))
		{
			printf("%d ",a);
			int sq=sqrt(a)+1;
			a=sq*sq;
		}
		else
		{
			a+=1;
		}
	}
}
