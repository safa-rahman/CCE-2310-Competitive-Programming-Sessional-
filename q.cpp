//Problem Name: Coordinates of a Point
//Course Title: Competitive Programming Sessional
//Course Code: CCE-2310
//Course Teacher Name: Mirza Raquib
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
for(int i=0;i<n;i++) {
int x;
cin>>x;
if(x==0) {
cout<<0<<" ";
}
while(x!=0) {
cout<<x%10<<" ";
x/=10;
}
cout<<endl;
}
}
