/*One edit apart
GIven two strings determine if they are both one edit distance apart.
Note: An edit between two strings is one of the following changes:
	1. Add a character
	2. Delete a character
	3. Change a character
Output true if the two strings are one edit distance apart else false

Example: 
oho zoho
TRUE

zoho zoohoo
FALSE*/

#include<bits/stdc++.h>
using namespace std;

int checkOneEditApart(string s1,string s2)
{
	int n1=s1.length(),n2=s2.length();
	if(abs(n1-n2)>1)
	{
		return 0;
	}
	int pos_count=0,neg_count=0;
	int arr[26]={0};
	for(int i=0;i<s1.length();i++)
	{
		arr[s1[i]-97]++;
	}
	for(int i=0;i<s2.length();i++)
	{
		arr[s2[i]-97]--;
	}
	for(int i=0;i<26;i++)
	{
		if(arr[i]<0)
			neg_count+=arr[i];
		if(arr[i]>0)
			pos_count+=arr[i];
	}
	if((pos_count==1 && neg_count==-1) || (pos_count==1 && neg_count==0)|| (pos_count==0 && neg_count==-1))
		return 1;
	else return 0;
}

int main()
{
	string s1,s2;
	cin>>s1>>s2;
	if(checkOneEditApart(s1,s2))
	{
		cout<<"True";
	}
	else
	{
		cout<<"false";
	}
}
