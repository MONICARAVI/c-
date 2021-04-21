/*Given a rational number, print it's corresponding equivalent mixed fraction representation.

Safely assume that float's precision in C/C++ is enough to handle the given inputs.

Input Format

Sample Input 0

2
2.5
6.25
Sample Output 0

2 1/2
6 1/4   */

#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b)
{
	if(b==0)
		return a;
	return gcd(b,a%b);
}

int main() {
    double s;
    cin>>s;
	double integral_part = floor(s);
	double decimal_part = (s-integral_part);
	const long long precision_value=1000000000;
    long long GCD = gcd(round(decimal_part*precision_value),precision_value); 
	long long numerator = round(decimal_part*precision_value)/GCD;
	long long denominator = (precision_value)/GCD;
	cout<<integral_part<<" "<<numerator<<"/"<<denominator;
	return 0;
}

