#include <bits/stdc++.h>
#define endl "\n"
#define c(n)        cin>>n;
#define pb          push_back
#define mkp         make_pair
#define INF         0x3f3f3f3f
#define s(a)        int(a.size())
#define newline     cout<<endl;
#define ff          first
#define ss          second
#define w(t)        int tc; cin>>tc; while(tc--)
#define all(a)      a.begin(),a.end()
#define f(i,a,b)    for(long long int i=a;i<b;i++)
#define nod(x,y)    x % y + (x % y < 0 ? y : 0)
#define r(i,a,b)    for(long long int i=a;i>b;i--)
#define print(v)    for (auto x: v)cout<<x<<" ";
#define debug(x)    cout<< #x << ':' << x << endl;
#define fast        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
const long long int MAX=10000007;
const long long int mod=1000000007;
/* global declaration */
bool flag_g=0;
string gg="abcdefghijklmnopqrstuvwxyz";string gv="aeiouy";//"AOYEUI";
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
int glob_a[1000];
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    fast;
    ll n;c(n)
    // vector <ll> v;
    vector <ll> a;
    ll sum=0;
    f(i,0,n){
        ll val;c(val)
        // v.pb(val);
        sum+=val;
    }
    f(i,0,n){
        ll val;c(val)
        a.pb(val);
    }
    sort(a.begin(),a.end());
    if(n<=2){
        cout<<"YES"<<endl;
    }
    else if(sum<=(a[s(a)-1]+a[s(a)-2])){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}