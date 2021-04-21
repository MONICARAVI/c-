/*Our friend Kirk invented a new language for people to code. He unfortunately forgot to implement the modulus operator. Assume there is no modulus operator in the language you use and help him to implement it.

Note: Remember you cannot use the "%" operator, because it isn't there ;)
nput Format

You will be given 2 integers, a and b

Constraints

Both a and b are integers.

Output Format

Print the required modulo value for each testcase

Sample Input 0

7 3
Sample Output 0

1
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int pro=0;
    
    //always keep large number in 'a'
    if(a<b)
    {
        a^=b^=a; // swapping
    }
    while(pro<a)
    {
        pro+=b;
    }
    if(pro<a || pro>a)
        cout<<abs(pro-a-b);
    else
        cout<<0;
    return 0;
}

