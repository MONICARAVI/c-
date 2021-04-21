/*
5
          0
        1 0 1
      2 1 0 1 2
    3 2 1 0 1 2 3
  4 3 2 1 0 1 2 3 4
5 4 3 2 1 0 1 2 3 4 5
  4 3 2 1 0 1 2 3 4
    3 2 1 0 1 2 3
      2 1 0 1 2
        1 0 1
          0
*/

#include<bits/stdc++.h>
using namespace std;

void printSpace(int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"  ";
	}
}

int main()
{
	int n;
	cin>>n;
	for(int i =0;i<=n;i++)
	{
		printSpace(n-i);
		for(int j=i;j>=0;j--)
		{
			cout<<j<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	for(int i=n-1;i>=0;i--)
	{
		printSpace(n-i);
		for(int j=i;j>=0;j--)
		{
			cout<<j<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
