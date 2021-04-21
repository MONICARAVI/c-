/*GIven a string generate all possible arrangements of it
Example: 
abc

OUTPUT:
abc
acb
bac
bca
cab
cba*/

#include<bits/stdc++.h>
using namespace std;

void swap(char *s,char *t)
{
	char temp = *s;
	*s=*t;
	*t=temp;
}

void permute(string s,int l,int r)
{
	if(l==r)
		cout<<s<<endl;
	for(int i=l;i<=r;i++)
	{
		swap(s[i],s[l]);
		permute(s,l+1,r);
		swap(s[i],s[l]);
	}
}
int main()
{
	string s;
	cin>>s;
	permute(s,0,s.length()-1);
}
