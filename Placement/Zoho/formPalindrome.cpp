/*Does Characters of the given string can be arranged to form
a palindrome

INPUT : EEVLL OUTPUT : YES

INPUT : RERCACA OUTPUT : YES

INPUT : INTERVIEW OUTPUT : NO

APPROACH : 1. We can form a palindrome with even frequency characters and 0 or 1 odd frequency
character. 
			2. So traverse the string and find freq of all characters
			3. Count no.of odd freq character.
			4. If it is 0 or 1 we can form a palindrome else no
			NOTE : Even frequency characters can be arranged to form palindrome fro sure.*/
#include<bits/stdc++.h>
using namespace std;

bool formPalindrome(string s)
{
    int arr[26]={0},count=0;
    for(int i=0;i<s.length();i++)
    {
        arr[s[i]-65]++;
    }
    for(int i=0;i<26;i++)
    {
        if(arr[i]%2)
            count++;
    }
    if(count<=1)
        return true;
    else
    {
        return false;
    }
    
}

int main()
{
    string s;
    cin>>s;
    if(formPalindrome(s))
        cout<<"Yes";
    else
    {
        cout<<"No";
    }
    
}
