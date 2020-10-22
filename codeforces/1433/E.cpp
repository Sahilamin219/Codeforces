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

ll n,got_u[10001];
vvi gr;
vi indegree;

void dfs_rooted_tree(ll node, ll parent)
{
    // how to find indegree
    for(auto x: gr[node])
    {
        //directed graph ?
        if(x!=parent)
        {
            if(indegree[node] <1)
            {
                dfs_rooted_tree(x, node);
                indegree[node]+=1;
            }
            else
            {
                got_u[ans]=node;
                ans++;
            }
        }
    }
}

ll fact(ll n)
{
    ll res=1;
    while(n>1)
    {
        res*=n;n--;
    }
    return res;
}

int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll take;cin>>take;
    cout<<fact(take)/((take/2)*(take/2)*2);
    exit(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int>in(n), out(n);
        for(int i=0;i<n-1;++i) {
            int a, b;
            cin >> a >> b;
            --a, --b;
            ++out[a];
            ++in[b];
        }
        sort(in.begin(),in.end());
        int ans = in.front();
        for(int i=1;i<n;++i)ans += max(0, in[i] - 1);
        cout << ans << '\n';
     }
    return 0;
}
// ifstream  i_data("data.in");
// ofstream  o_data("data.out");
// #define cin  i_data
// #define cout o_data
//ifstream cin("b_read_on.txt"); ofstream cout("output3.txt");
//Use (<<) for multiplication
//Use (>>) for division
//ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);cout<<fixed;cerr.tie(NULL);
// find_by_order -> value at index
// order_of_key -> index of value
// while using (1<<i) use ((ll)1<<(ll)i) 
// in Floyd-Warshall Algo, k is outer loop 
// If an element was not initially in map and if asked mp[a],the element gets inserted 
// a%=mod take a lot of time... try to use it minimum and use memset as it reduces a lot of time usage...use if(a>=mod) a%=mod
//cout<<(double) can be harmful , always use printf(%.9llf)...take scanf("%lf",&p[i][j]) as input , not llf;
//use s.erase(it++) for erasing iterator and then moving to the next one
//never use adj.resize(n) as value is persistent, always erase
//use __builtin_popcountll() for ll
// no of prime numbers in range : (70,19) , (1000,168) , (100000,1229) , (sqrt(10^9),3409) ;
//always check the use of segment tree using bottom-    up dp
//__gcd(0,0) gives runtime error
//power(a,b) == power(a,b%phi(a)) Fermet's Theorem
//never use "=" operator in compare function
//For checking odd cycles, check bipartite