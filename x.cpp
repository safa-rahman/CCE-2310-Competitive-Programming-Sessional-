//Problem Name: Two intervals
//Course Title: Competitive Programming Sessional
//Course Code: CCE-2310
//Course Teacher Name: Mirza Raquib
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
         long long n,one=0,r,ans;
         cin>>n;
         while(n!=0)
         {
           r=n%2;
           if(r==1)one++;
           n=n/2;
         }
          ans=pow(2,one)-1;
         cout<<ans<<endl;
     }
}
