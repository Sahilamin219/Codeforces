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
    int t;cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;cin>>s;
        int ans=0;
        int gaps=0;
        vector<int> v;
        f(i,0,n)
        {
            if(s[i]=='W')
            {
                if(i and s[i-1]=='W')
                {
                    ans+=2;
                }
                else
                {
                    ans++;
                    v.push_back(gaps);
                    gaps=0;
                }
            }
            else
            {
                gaps++;
            }
        }
        v.push_back(gaps);
        if(k==0)cout<<ans<<"\n";
        else if(v.size()==1)cout<<2*k-1<<endl;
        else
        {
            multiset<int> mst;
            f(i,1,sz(v)-1)mst.insert(v[i]);
            for(auto it: mst)
            {
                if(k>=it)
                {
                    ans+=(2*it+1);
                    k-=it;
                }
                else
                {
                    ans+=2*k;
                    k=0;
                    break;
                }
            }
            // cout<<k<<" ";
            ans+= 2*min(k, v.back() + v[0]);
            ans=min(2*n-1, ans);
            cout<<ans<<"\n";
        }
    }
}