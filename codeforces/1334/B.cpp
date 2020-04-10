#include <bits/stdc++.h>
#define s(a) int(a.size())
#define fori(i,a,b) for(long long int i=a;i<b;i++)
#define foir(i,a,b) for(long long int i=a;i>b;i--) 
#define pb push_back
#define make_pair mp;
#define mod 1000000007;
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
// const long long int mod=1000000007;
#define debug(x) cout<< #x << ':' << x << endl;
#define c(n) cin>>n;
#define endl "\n";
/* global declaration */
bool flag_g=0;
string gg="abcdefghijklmnopqrstuvwxyz";
string gv="aeiouy";//"AOYEUI";
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
// void solve(vector <ll> v, ll n){
//     ll maxi=v[0];
//     fori(i,0,n){
//         ll temp_maxi=v[i];
//         if(maxi<temp_maxi) maxi=temp_maxi;
//         fori(j,i+1,n){
//             temp_maxi = temp_maxi ^ v[j];
//             // cout<<temp_maxi<<" ";
//             if(maxi<temp_maxi) maxi=temp_maxi;
//         }
//     }
//     cout<<maxi<<endl;
// }
int main(){ 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    fast;
    ll t;c(t);
    while(t--){
        ll n,x;
        c(n);c(x);
        ll a[n];
        fori(i,0,n){
            c(a[i]);
        }
        sort(a,a+n);
        reverse(a,a+n);
        ll ans=0;ll sum=0;
        fori(i,0,n){
            sum+=a[i];
            if(sum>=((i+1)*x)){
                ans++;
            }
        }
        cout<<ans<<"\n";
    }
    // ll n;c(n);
    // vector <ll> v(n,0);
    // fori(i,0,n){
    //     ll val;c(val);
    //     v[i]=val;
    // }
    // for(auto x: v){
    //     cout<<x<<" ";
    // }cout<<endl;
    // solve(v,n);
    // puts(flag?"NO":"YES");
    return 0;
}