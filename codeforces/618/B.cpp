#include <bits/stdc++.h>
#define endl "\n";
#define s(a) int(a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define fg(i,a,b) for(long long int i=a;i>b;i--) 
#define pb push_back
#define mkp make_pair
#define mod 1000000007;
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define debug(x) cout<< #x << ':' << x << endl;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
#define INF 0x3f3f3f3f;
double maximum = numeric_limits<double>::max();
double inf = numeric_limits<double>::infinity();
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    fast;
    ll n;cin>>n;
    vector<vector<ll>> v(n,vector<ll> (n,0));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    ll arr[50]={0};
    vector<ll> a(n,0);
    for(ll i=0;i<n;i++){
        ll maxi=0;
        for(ll j=0;j<n;j++){
            if(v[i][j]>maxi){
                maxi=v[i][j];
            }
        }
        a[i]=maxi;
        arr[a[i]]++;
    }
    // for(auto x: a)cout<<x<<" ";
    // cout<<endl;
    for(ll i=0;i<n;i++){
        if(arr[a[i]]==2){
            a[i]++;
            break;
        }
    }
    for(auto x: a)cout<<x<<" ";
    return 0;
}