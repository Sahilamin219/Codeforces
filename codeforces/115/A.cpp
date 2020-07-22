#include <bits/stdc++.h>
#define s(a) long (a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--)
#define pb push_back
#define all(x) x.begin(), x.end()
using namespace std;
typedef long long int ll;
vector<int> visted(2001,0);
vector<int> depth(20001,0);
int fun(vector<vector<int>> v, int ind)
{
    if(visted[ind])return depth[ind];
    visted[ind]=1;
    int temp_depth=1;
    f(i,0,v[ind].size())
    {
        temp_depth=max(temp_depth, 1+fun(v,v[ind][i]));
    }
    depth[ind]=temp_depth;
    return temp_depth;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // int t;cin>>t;
    int t=1;
    while(t--){
        int n;cin>>n;
        vector<vector<int>> v(n);
        f(i,0,n)
        {
            int a;cin>>a;
            if(a!=-1)v[a-1].pb(i);
        }
        int ans=1;
        f(i,0,n)
        {
            if(!visted[i]){ans=max(ans, fun(v,i));}
        }
        cout<<ans;
    }
    return 0;
}