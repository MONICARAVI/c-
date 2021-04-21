/* Given a string S of odd length. the program must print it twice as diagonal with the middle letter being the point of intersection */
/*
INPUT POP
OUTPUT:
    P P
     O
    P P
*/
#include<stdio.h>
#include<string.h>
main()
{
	char s[20];
	scanf("%s",&s);
	int first=0,last=strlen(s)-1;
	for(inti=0;s[i]!='\0';i++)
	{
		for(int j=0;s[j]!='\0';j++)
		{
			if(j==first || j==last)
				printf("%c",s[j]);
			else
			{
				printf(" ");
			}
		}
		first++;
		last--;
		printf("\n");
	}
}
