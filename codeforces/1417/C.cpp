#include <bits/stdc++.h>
#define sz(a) long (a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define fr(i,a,b) for(long long int i=a;i>b;i--)
#define pb push_back
#define mkp make_pair
#define mod 1000000009
#define MAX 100000
#define lim 1000005
#define inf 1e18
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
using namespace std;
typedef long long int ll;
long long maximum=numeric_limits<int>:: max();
typedef vector<ll> vi;
typedef vector<vi> vvi;
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) 
{return (a.second < b.second);}
ll get_hash(ll x, ll y, ll z)
{
    return (z) + (3001)*(y) + (3001*3001*(x));
    // unordered_set<ll> trips;trips.find(prep + v) == trips.end()
}
//*s.find_by_order(x) --> value at position x(0-indexed)
//s.order_of_key(x)   --> number of elements less than x
ll cal(ll r,ll i){
    ll zeros = (1LL<<i) - 1, n = (1LL<<(i+1));
    r = max(0LL, r - zeros);
    return r/n *(n/2) + min(r%n,n/2);
}
ll rsm(ll l,ll r,ll i){
   return cal(r,i) - cal(l-1,i);
}
int32_t main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        vi v(n);f(i,0,n)cin>>v[i];
        vi ans(n,-1);
        map<ll, vector<ll>> m;
        f(i,1,n+1)
        {
            m[i].emplace_back(0);
        }
        f(i,0,n)
        {
            m[v[i]].pb(i+1);
        }
        f(i,1,n+1)
        {
            m[i].emplace_back(n+1);
        }
        // vi store_n(n+1,1e9);
        map<ll, ll> store_n;
        f(i,1,n+1)
        {
            ll max_dif=-1;
            vi vsm = m[i];
            f(j,1,vsm.size())
            {
                max_dif=max(max_dif, vsm[j]-vsm[j-1]);
                if(j == vsm.size()-1)store_n.insert({ max_dif, i });
            }
            // store_n[i]=max_dif;
        }
        // for(auto x: store_n)cout << x.first << " " << x.second << "\n";
        ll mini=inf;
        f(i,1,n+1)
        {
            if(store_n.find(i)!=store_n.end())
            // if(store_n[i])
            {
                mini=min(store_n[i], mini);
                store_n[i]=mini;
            }
        }
        // f(i,1,n+1)
        auto x=store_n.begin(); ll i=1, last=x->first;
        // map<ll, ll> rev;
        // for(;x!=store_n.end() ; x++)
        // {
        //     rev.insert({x->second, x->first});
        // }
        // for(auto x: rev)cout << x.first << " " << x.second << "\n";
        auto ptr=store_n.begin();
        f(i,1,n+1)
        {
            if(store_n[i])
            {
                cout<<store_n[i]<<" ";ll p=store_n[i];
                if(next(ptr)!=store_n.end()) { ll k = next(ptr)->first;i++;
                    while(i<k)
                    {
                        cout<<p<<" ";i++;
                    }i-=1;
                }
                ptr++;
            }
            else
            {
                cout<<-1<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}