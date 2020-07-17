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
    string s;cin>>s;
    int a=-1,b=-1,c=-1,d=-1;
    a=s.find("AB");
    b=s.find("BA",a+2);
    c=s.find("BA");
    d=s.find("AB", c+2);
    if((a!=-1 and b!=-1) or (c!=-1 and d!=-1))cout<<"YES";
    else{cout<<"NO";}
    // ll m=1000000007;
    // ll n;cin>>n;
    // vector<vector<ll>> dp(2, vector<ll> (4,0));
    // dp[0][0]=0;
    // dp[0][1]=0;
    // dp[0][2]=0;
    // dp[0][3]=1;
    // f(i,1,n+1)
    // {
    //     if(i%2==0){
    //         dp[0][0]=(dp[1][3]+dp[1][2]+dp[1][1])%m;
    //         dp[0][1]=(dp[1][2]+dp[1][3]+dp[1][0])%m;
    //         dp[0][2]=(dp[1][1]+dp[1][0]+dp[1][3])%m;
    //         dp[0][3]=(dp[1][2]+dp[1][0]+dp[1][1])%m;
    //         // cout<<dp[0][3]<<" ";
    //     }
    //     else{
    //         dp[1][0]=(dp[0][3]+dp[0][2]+dp[0][1])%m;
    //         dp[1][1]=(dp[0][2]+dp[0][3]+dp[0][0])%m;
    //         dp[1][2]=(dp[0][1]+dp[0][0]+dp[0][3])%m;
    //         dp[1][3]=(dp[0][2]+dp[0][0]+dp[0][1])%m;
    //         // cout<<dp[1][3]<<" ";
    //     }
    // }
    // cout<<dp[n%2][3];
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