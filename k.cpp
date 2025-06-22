// Problem Name : Sum Digits
//Course Title : Competitive Programming Sessional
//Course Code : CCE-2310
//Course Teacher Name : Mirza Raquib
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    string s;
    cin>>s;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=(int)(s[i]- '0');
    }
        cout<< sum <<endl;
    return 0;
}
