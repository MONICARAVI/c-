#include<iostream>
using namespace std;
#include<string.h>
#include<ctype.h>
class stack{
	private:
		int top;
		char s[1000];
	public:
		stack()
		{
			top=-1;
		}
		char pop();
		void push(char);
		int isempty();
};
int stack::isempty()
{
	if(top==-1)
	{
		return 1;
	}
	else return 0;
}
void stack::push(char x)
{
	if(top==-1)
		top=0;
	else
		top+=1;
	s[top]=x;
}
char stack::pop()
{
	char t=s[top];
	top--;
	return t;
}
main()
{
	int test;
	cin>>test;
	cin>>ws;
	while(test--)
	{
	int n,flag=0;
	stack s;
	string a;
	getline(cin,a);
	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]=='('||a[i]=='{'||a[i]=='[')
		{
			s.push(a[i]);
		}
		else if(a[i]==')'||a[i]==']'||a[i]=='}')
		{
			char m=s.pop();
			if((m=='(' && a[i]==')') || (m=='{' && a[i]=='}') || (m=='[' && a[i]==']'))
				continue;
			else 
			{
				flag++;
				break;
			}
		}
	}
	if(s.isempty()&&flag==0)
		cout<<"balanced\n";	
	else
		cout<<"not balanced\n";
}}
