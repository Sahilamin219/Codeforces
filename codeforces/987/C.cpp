#include <bits/stdc++.h>
// #define s(a) long (a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--)
#define pb push_back
#define mkp make_pair
#define mod 1000000009
#define all(x) x.begin(), x.end()
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define debug(x) cout<< #x << ':' << x << endl;
using namespace std;
typedef long long int ll;
#define INF 0x3f3f3f3f;
template<typename T>void debugv(vector<vector<T>> v){for(auto x:v){for(auto y:x){cout<<y<<" ";}cout<<"\n";}}
template <typename T> T myMax(T x, T y){return (x > y)? x: y;} 
long long maximum=numeric_limits<int>:: max();
long long minimum=numeric_limits<int>:: min();
string gg="abcdefghijklmnopqrstuvwxyz";//"AOYEUI";
int max3(int a, int b, int c){return max(a, max(b,c));}
int mint(int x, int y, int z) 
{   
    if (x < y) return (x < z)? x : z; 
    else return (y < z)? y : z; 
}
vector <pair<long long int,long long int>> v;
bool sortbysec(const pair<ll,ll> &a, const pair<ll,ll> &b)
{
    if(a.second==b.second){return (a.first > b.first);}
    return a.second>b.second;
}
bool cmp(pair<ll, ll>& a, pair<ll, ll>& b) 
{ 
    return a.second < b.second; 
} 
template <typename T1, typename T2>
struct less_second {
    typedef pair<T1, T2> type;
    bool operator ()(type const& a, type const& b) const {
        return a.second < b.second;
    }
};
#ifdef WIN32
#define INT64 "%I64d"
#else
#define INT64 "%lld"
#endif
ll baselog(ll base, ll x) {
    return (ll)(log(x) / log(base));
}
// vector<vector<int>> visted(10001, vector<int> (10001,0));
vector<int> visted(101, 0);
void dfs(vector<vector<int>> v, int ind)
{
    if(visted[ind]) return;
    visted[ind]=1;
    f(i,0,v.size())
    {
        if(!visted[i] and (v[i][0]==v[ind][0] or v[i][1]==v[ind][1]))
        {
            dfs(v,i);
        }
    }
}
int32_t main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    //freopen("error.txt", "w", stderr);
    #endif
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //REALLY TIRED OF THIS SHIT
    // https://codeforces.com/problemset/problem/522/A
    // https://codeforces.com/contest/913/problem/C
    // https://discuss.codechef.com/t/xorcist-editorial/72466
    ll n;cin>>n;
    vector<ll> s(n);
    vector<ll> c(n);
    f(i,0,n)cin>>s[i];
    f(i,0,n)cin>>c[i];
    ll ans=maximum;
    f(j,0,n)
    {
        ll temp1=c[j];
        ll temp2=maximum;
        ll temp3=maximum;
        ll mini=maximum;
        f(i,0,j+1)
        {
            if(s[i]<s[j] and c[i]<mini)
            {
                temp2=c[i];
                mini=c[i];
            }   
        }
        mini=maximum;
        f(i,j,n)
        {
            if(s[i]>s[j] and c[i]<mini)
            {
                temp3=c[i];
                mini=c[i];
            }
        }
        mini=temp1+temp2+temp3;
        ans=min(ans, mini);
    }
    if(ans==maximum){cout<<-1<<endl;}
    else{cout<<ans<<endl;}
    return 0;
}