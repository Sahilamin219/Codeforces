#include <bits/stdc++.h>
#define sz(a) long (a.size())
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
int n,m,k,s;
void bfs(int cur_city, int own_gud, vector<vector<int>> graf, vector<int> gud)
{
    int ans=0;
    queue<int> q;
    q.push(cur_city);
    int cost=0;
    set<int> st;
    st.insert(own_gud);
    vector<int> visited2(n+1,0);
    int flag=0;
    if(st.size()==s){goto skip;}
    while(!q.empty())
    {
        int k=q.front();
        q.pop();
        cost++;    
        visited2[k]=1;
        for(int i=0;i<graf[k].size();i++)
        {
            if(!visited2[graf[k][i]])
            {
                q.push(graf[k][i]);
                if(st.count(gud[graf[k][i]-1])==0)
                {
                    st.insert(gud[graf[k][i]-1]);
                    ans+=cost;
                }
                if(st.size()==s){flag=1;break;}
            }
        }
        if(flag){break;}
    }
    skip:
    cout<<ans<<" ";
}
void solve(){
    ll n;
    cin >> n;
    ll len = 4*n;
    f(i,0,n){
        len-=4;
        if(len>=n) cout << 9;
        else cout << 8;
    }
    cout<<"\n";
}
int32_t main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    //freopen("error.txt", "w", stderr);
    #endif
    time_t t1, t2;
    t1 = clock();
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //REALLY TIRED OF THIS SHIT
    // https://codeforces.com/problemset/problem/522/A
    // https://codeforces.com/contest/913/problem/C
    // https://discuss.codechef.com/t/xorcist-editorial/72466
    // ll t=1;
    // cin >> t;
    // f(i,0,t) {
    //     solve();
    // }
    int n;cin>>n;
    vector<vector<int>> v(n+1);
    vector<int> parent(n+2);
    f(i,0,n-1)
    {
        int a;cin>>a;v[a].pb(i+2);
        parent[i+2]=a;
    }
    queue<int> q;
    q.push(1);
    vector<int> ans;
    // vector<int> distance(n,INF);
    // distance[0]=0;
    // while(!q.empty())
    // {
    //     int k=q.front();
    //     q.pop();
    //     for(int i=0;i<v[k].size();i++)
    //     {
    //         q.push(v[k][i]);
    //     }
    // }
    // f(i,1,n)
    // {
    //     f(j,0,s(v[i]))
    //     {
    //         if(v[i][j]==n){ans.pb(i);break;}
    //     }
    // }
    int k=parent[n];
    while(k!=1)
    {
        ans.pb(k);
        k=parent[k];
    }
    reverse(all(ans));
    // cout<<ans.size()+2<<endl;
    cout<<1<<" ";
    for(auto x: ans){cout<<x<<" ";}
    cout<<n<<" ";
    t2 = clock();
    cerr << "time taken: " << t2-t1;
    return 0;
}
// void siev(int n)
// {
//  sieve[0]=false;
//  sieve[1]=false;
//  for(int i=2; i<=sqrtl(n); i++)
//  {
//      if(sieve[i])
//      {
//          for(int j=i; i*j<=n; j++)
//          {
//          sieve[i*j]=false;
//          }
//      }
//  }
// }
