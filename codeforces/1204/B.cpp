#include <bits/stdc++.h>
#define sz(a) long (a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define fr(i,a,b) for(long long int i=a;i>b;i--)
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
map<string, ll>  vis;
ll ans=0;
vi ans_v;
int find_index(string str, string s){
    vector<int> v;
    for (int i = 0; i < str.length(); i++) {
        if (str.substr(i, s.length()) == s) {
            v.push_back(i);
        }
    }
    return v.size();
}
void dfs(string s, ll h)
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
    int n,l,r;cin>>n>>l>>r;
    int mini=0, maxi=0, val=1;
    int a=l,b=r;
    while(a--)
    {
        mini+=val;val*=2;
    }val=1;
    while(b--)
    {
        maxi+=val;val*=2;
    }
    cout<<(n-l)+mini<<" "<<maxi+(val/2)*(n-r);
}