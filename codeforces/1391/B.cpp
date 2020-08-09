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
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        int n,m;cin>>n>>m;
        int ans=0;
        vector<string> v(n);
        f(i,0,n)
        {
            cin>>v[i];
        }
        f(j,0,m-1)
        {
            if(v[n-1][j]!='R'){ans++;}
        }
        f(i,0,n-1)
        {
            if(v[i][m-1]!='D'){ans++;}
        }
        cout<<ans<<endl;
    }
    return 0;
}