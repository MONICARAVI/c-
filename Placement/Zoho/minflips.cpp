/*Given a string containing 0's and 1's. The task is to find out minimum number of bits to
be flipped suc that 0's and 1's will be alternative

  i/p = "001"
  O/p = 1
  
  i/p = "0001010111"
  o/p = 2*/

#include<iostream>
using namespace std;

int noofflips(string s,char a)
{
	char b=(a=='0')?'1':'0';
	char temp;
	int count=0;
	for(int i=0;i<s.length();i++)
	{
		temp=(i%2==0)?a:b;
		if(s[i]!=temp)
		{
			count++;
		}
	}
	return count;
}

int minFlips(string s)
{
	return min(noofflips(s,'1'),noofflips(s,'0'));
}

int main()
{
	string s;
	cin>>s;
	cout<<minFlips(s);
	return 0;
}
