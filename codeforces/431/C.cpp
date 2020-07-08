/* |     |           ___            |      |  __             __    __    __   __
   |     |    /\    /   \ |    |    |      | |   \    /\    |   \ |   \ |    |  \
   |-----|   /__\   \___  |____|    |  /\  | |__ /   /__\   |__ / |__ / |_   |__/
   |     |  /    \      \ |    |    | /  \ | |  \   /    \  |     |     |    |  \
   |     | /      \ \___/ |    |    |/    \| |   \ /      \ |     |     |__  |   \
*/
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lb lower_bound
#define ub upper_bound
#define pf push_front
#define pb push_back
#define ll long long
#define pi pair<int,int>
#define pl pair<long long,long long>
#define pld pair<long double,long double>
#define endl '\n'
#define loop(i,n) for(ll i=0;i<n;i++)
#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define mod ((ll)(1e9+7))
#define in(x) scanf("%lld",&x)
#define in2(x,y) scanf("%lld %lld",&x,&y)
#define in3(x,y,z) scanf("%lld %lld %lld",&x,&y,&z)
#define inv(v) for(auto&i:v) in(i)
#define all(x) x.begin(), x.end()
#define vl vector<ll>
#define ml unordered_map<ll,ll>
#define mlc unordered_map<int,int,custom_hash> 
#define vpl vector<pair<ll,ll>>
#define INF 0x3f3f3f3f
 
template<typename T, typename TT>
ostream& operator<<(ostream &os, const pair<T, TT> &t) { return os<<t.first<<" "<<t.second; }
template<typename T>
ostream& operator<<(ostream& os, const vector<T> &t) { for(auto& i: t) os<<i<<" "; return os; }
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

ll com(ll n,ll m){
    ll ans=1;
    rep(i,m+1,n){
        ans*=i;
    }rep(i,1,n-m){
        ans/=i;
    }
    return ans;
}


ll n,k,d;ll pd[124][2];

ll dp(ll m,ll c)
{
    if(m==0)return c;
    if(m<=0)return 0;
    if(pd[m][c]!=-1)return pd[m][c];
    ll s=0;
    if(pd[m][c]==-1)
    {
	    for(int i=1;i<=k;++i){
	        s+=(dp(m-i,c||i>=d)%1000000007);
	        s=(s%1000000007);
	    }
    }
    pd[m][c]=s;
    return s;
}

int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif//freopen("error.txt", "w", stderr);
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    in3(n,k,d);
    memset(pd,-1,sizeof(pd));
    cout<<(dp(n,0)%1000000007);

    //cerr << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    return 0;
}