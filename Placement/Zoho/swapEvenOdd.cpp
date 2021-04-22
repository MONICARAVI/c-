/* Given an array rearrange even and odd numbers such that even numbers occurs first
then odd numbers. Order doesn't matter

SPACE COMPLEXITY : O(1)

TIME COMPLEXITY: O(n)

INPUT : [1 3 5 8 9 10]
OUTPUT : [8 10 1 3 5 9]

NOTE: [10 8 3 5 9 1] is also correct*/

#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

void swapEvenOdd(int *arr,int n)
{
	int i=0,j=n-1;
	while(i<j)
	{
		if(arr[i]%2 && arr[j]%2==0)
		{
			swap(arr[i],arr[j]);
			i++;
			j--;
		}
		if(arr[i]%2==0)
			i++;
		if(arr[j]%2)
			j--;
	}
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	swapEvenOdd(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
