/*
Find whether the given mathematical expression has balanced parentheses, braces and square brackets.

Input Format

The input has an expression with parantheses, braces and square brackets.

Constraints

The input has an expression with parantheses, braces and square brackets.

Output Format

Print YES if the expressionis balanced, else print NO.

Sample Input 0

(2+2)
Sample Output 0

YES
*/

#include<bits/stdc++.h>
using namespace std;
// to check whether the closing bracket matches the most recent opening bracket 
bool match(char a,char b)
{
	bool ans;
	switch(a)
	{
		case '}':
			ans=(b=='{')?true:false;
			break;
		case ']':
			ans= (b=='[')?true:false;
			break;
		case ')':
			ans=(b=='(')?true:false;
			break;
	}
	return ans;
}

bool isbalanced(string exp)
{
	stack <char> st;
	for(int i=0;i<exp.length();i++)
	{
		if(exp[i]=='{'||exp[i]=='('||exp[i]=='[')
			st.push(exp[i]);
		else if(exp[i]=='}'||exp[i]==')'||exp[i]==']')
		{
			if(st.empty())
				return false;
			if(match(exp[i],st.top()))
			{
				st.pop();
			}
			else
				return false;
		}
		else
			continue;
	}
	return true;
}

int main()
{
	string s;
	cin>>s;
	if(isbalanced(s))
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}
