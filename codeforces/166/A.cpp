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
#ifdef WIN32
#define INT64 "%I64d"
#else
#define INT64 "%lld"
#endif
int32_t main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    //freopen("error.txt", "w", stderr);
    #endif
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // 1.map<pair, int> ka bana
    int n,k;cin>>n>>k;
    vector<pair<int, int>> v;
    f(i,0,n)
    {
        int a,b;cin>>a>>b;
        // m[{a,b}]+=1;
        v.pb(mkp(a,b));  
    }
    // for(auto x:v){cout<<x.first<<" "<<x.second<<endl;}
    f(i,0,n)
    {
        f(j,i,n)
        {
            if(v[j].first>v[i].first)
            {
                swap(v[i], v[j]);
            }
            else if(v[j].first==v[i].first and v[i].second>v[j].second)
            {
                swap(v[i], v[j]);
            }
        }
    }
    // for(auto x:v){cout<<x.first<<" "<<x.second<<endl;}
    int count=0, ans=1;
    // auto it=m.end();
    // for(;it!=m.begin();it--)
    // {
    //     count+=it;
    //     if(count>=k){break;}
    // }
    // cout<<it;
    // f(i,0,n-1)
    // {
    //     if(v[i].second!=v[i+1].second and v[i].first!=v[i+1].first){count++;}
    //     if(count==k){break;}
    // }
    count=k-1;
    while(count>=0 and v[count-1].second==v[count].second and v[count-1].first==v[count].first)
    {
        ans++;
        count--;
    }
    while(k<n and v[k-1].second==v[k].second and v[k-1].first==v[k].first)
    {
        ans++;
        k++;
    }
    cout<<ans;
    return 0;
}
// #include<bits/stdc++.h>
// #define ll long long
// #define PI 3.14159265
// ll mod = 1000000009;
// using namespace std;
// template<typename T>
// void debug(vector<T> x){
//     for(auto e:x){
//         cout<<e<<" ";// template<typename T>
// void debug(vector<T> x){
//     for(auto e:x){
//         cout<<e<<" ";
//     }cout<<"\n";
// }
//     }cout<<"\n";
// }
// ll dpHelper(vector<ll>& dp, ll n){
//     if(dp[n]!=-1){
//         return dp[n];
//     }else{
//         int x = dpHelper(dp,n-3);
//         int y = dpHelper(dp, n-2);
//         if(x==-1 && y== -1){
//             dp[n] = -1;
//         }else if(x == -1){
//             dp[n] = y;
//         }else if(y == -1){
//             dp[n] = x;
//         }else{
//             dp[n] = ((x%mod +y%mod)%mod);
//         }
//         return dp[n];
// }
// int main(){
//     ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//     int t = 1;
//     cin>>t;
//     vector<ll> dp(1e6+5, -1);
//     dp[0] = 1;
//     dp[1] = 0;
//     dp[2] = 1;
//     dp[3] = 1;
//     ll x,y;
//     for(ll i=4; i<=1e6; i++){
//         dp[i] = dpHelper(dp, i);
//     }
//     while(t--){
//         ll n;
//         cin>>n;
//         cout<<dp[n]<<"\n";
//     }
//     return 0;
// }