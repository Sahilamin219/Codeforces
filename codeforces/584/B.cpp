#include <bits/stdc++.h>
#define n(a) int(a.size())
#define fori(i,a,b) for(int i=a;i<b;i++) 
#define mod 1000000007
using namespace std;
typedef long long int LL;
const long long int mx=100000;
const long long int m=1000000007;
/* global declaration */

int main()
{
    LL n,ans,i,k,x;
    while(cin>>n)
    {
        ans=1;
        for(i=1;i<=3*n;i++) ans=(ans*3)%m;
        x=1;
        for(i=1;i<=n;i++) x=(x*7)%m;
        ans=ans-x;
        if(ans<0) ans+=m;
        cout<<(ans);
    }
    return 0;
}