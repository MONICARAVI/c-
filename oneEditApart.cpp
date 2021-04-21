/*One edit apart*/

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
