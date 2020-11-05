#include <bits/stdc++.h>
#define sz(a) long (a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define fr(i,a,b) for(long long int i=a;i>b;i--)
#define MAX 200001
#define pb push_back
#define mkp make_pair
#define mod 1000000007
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
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) {return (a.second < b.second);}
template <typename T,typename... Types>
void sout(T var1, T var2){
    cout<<var1<<" "<<var2;
}template <typename T, typename TT>
inline ostream &operator<<(ostream &os, const pair<T, TT> &t) {
    return os << t.first << " " << t.second;
}
template <typename T>
inline ostream &operator<<(ostream &os, const vector<T> &t) {
    for (auto i : t) os << i << " ";
    return os;
}
template <typename T>
inline ostream &operator<<(ostream &os, const set<T> &t) {
    for (auto i : t) os << i << " ";
    return os;
}
template <typename T1, typename T2>
inline ostream &operator<<(ostream &os, const map<T1, T2> &t) {
    for (auto i : t) os << i.first << " : " << i.second << endl;
    return os;
}
template <typename T>
inline istream &operator>>(istream &is, vector<T> &v) {
    for (T &t : v) is >> t;
    return is;
}
template <typename T1, typename T2>
inline istream &operator>>(istream &is, vector<pair<T1, T2>> &v) {
    for (pair<T1, T2> &t : v) is >> t.first >> t.second;
    return is;
}
void solve()
{
    ll N,M;cin>>N>>M;
    vector<pair<ll, ll>> vp;
    if(not M)
    {
        ll cnt=1;
        f(i,0,N)cout<<cnt++<<" "<<cnt++<<"\n";
        return;
    }
    if(M<0 or M>=N-1){cout<<-1;return ;}
    const ll K = 1e6;
    cout << 1 << " "<< K << " "<<endl;
    ll cnt = 2;
    for(ll i=1;i<=M+1;i++){
        cout << cnt++ << " " << cnt++ << endl;
    }
    cnt = K+1;
    for(ll i=1;i<=N-M-2;i++){
        cout << cnt++ << " " << cnt++ << endl;
    }
}
int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    #endif
    int t=1;
    // cin>>t;
    while(t--)solve();
    exit(0);
    return 0;   
}