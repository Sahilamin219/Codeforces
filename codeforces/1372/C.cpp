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
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    //freopen("error.txt", "w", stderr);
    #endif
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<ll> v(n);f(i,0,n)cin>>v[i];
        int k1=n-1;
        vector<ll> d(v);sort(all(d));
        // for(auto x:d)cout<<x<<" ";
        while(k1>=0 and v[k1]==d[k1])k1--;
        if(k1==-1){cout<<0<<endl;}
        else{
            int k2=0,f=1;;
            while(v[k2]==d[k2])k2++;
            f(i,k2,k1)
            {
                if(v[i]==d[i]){cout<<2<<endl;f=0;break;}
            }
            if(f)cout<<1<<"\n";
        }
    }
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