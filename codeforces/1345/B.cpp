// "I don't need anyone. I just need everyone and then some"
#include <bits/stdc++.h>
#define sz(a) long (a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--)
#define pb push_back
#define mkp make_pair
#define mod 1000000009
#define MAX 100000
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define debug(x) cerr<< #x << ':' << x << endl;
#define lb(c, x) distance((c).begin(), lower_bound(all(c), (x)))
#define ub(c, x) distance((c).begin(), upper_bound(all(c), (x)))
#define fit(it,c) for ( __typeof((c).begin()) it=(c).begin(); it!=(c).end(); it++ )
using namespace std;
typedef long long int ll;
typedef vector<ll> vi;
typedef vector<vi> vvi;

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) 
{return (a.second < b.second);}

map<string, vector<string>>  m;
int ans=0;
map<string, int>  vis;

void dfs(string s, int h)
{
    vis[s]=1;
    for (auto x: m[s])
    {
        if(!vis[x])
        {
            dfs(x ,h+1);
        }
    } 
    ans=max(ans , h);
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    // brute force greedy math 
    // __builtin_popcount
    int t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;ll m=1;
        ll x= 3*(m*(m-1))/2 + 2*m;
        // cout<<x<<"\n";
        ll ans=0;
        while(n>=2)
        {   
            while(x<=n)
            {
                m++;
                x= 3*(m*(m-1))/2 + 2*m;
            }
            m--;
            x= max(2ll ,3*(m*(m-1))/2 + 2*m);
            n-=x;
            if(x)ans++;
            m=1;x=2;
            // cout<<x<<" ";
        }
        cout<<ans<<"\n";
    }
}