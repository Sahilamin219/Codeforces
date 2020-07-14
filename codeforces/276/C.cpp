#include <bits/stdc++.h>
#define s(a) int(a.size())
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
int getSum(vector<int> bit, int index)
{
    ll sum=0;index++;
    while(index>0)
    {
        sum+=bit[index];
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,q;cin>>n>>q;
    vector<ll> v(n);f(i,0,n)cin>>v[i];
    sort(all(v));
    // vector<pair<ll,ll>> ind;
    // map<ll,ll> m;
    vector<ll> ind(n,0);
    while(q--)
    {
        ll a,b;cin>>a>>b;
        ind[a-1]++;
        if(b-1<n-1)ind[b]--;
    }
    f(i,1,n)
    {
        ind[i]+=ind[i-1];
    }
    // for(auto& it: m)
    // {
    //     ind.pb(it);
    // }
    // sort(ind.begin(), ind.end(), less_second<ll, ll>()); 
    // for(auto x:ind){cout<<x<<" ";}cout<<endl;
    sort(all(ind));
    ll sum=0;
    f(i,0,n)
    {
        // sum+=(v[i]*ind[i].second);
        sum+=(v[i]*ind[i]);      
    }
    cout<<sum;
    // NO NEED OF BIT....
    // HAVE DONE SAME TYPE OF QUESTION BUT TOOK TOO LONG
    return 0;
}