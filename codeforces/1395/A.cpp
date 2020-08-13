#include <bits/stdc++.h>
#define sz(a) int(a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--) 
#define pb push_back
#define mkp make_pair
#define mod 1000000007;
#define all(x) x.begin(), x.end()
using namespace std;
typedef long long int ll;
int main()//¬_¬ 
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        ll r,g,b,w;
        cin>>r>>g>>b>>w;
        int odd=(r%2)+(g%2)+(w%2)+(b%2);
        if(r and b and g)r--,b--,g--,w+=3;
        int next_odd=(r%2)+(g%2)+(w%2)+(b%2);
        if(next_odd<=1 or odd<=1){cout<<"Yes\n";}
        else{cout<<"No\n";}
    }
    return 0;
}