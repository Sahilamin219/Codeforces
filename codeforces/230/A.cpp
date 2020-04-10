#include <bits/stdc++.h>
#define s(a) int(a.size())
#define fori(i,a,b) for(long long int i=a;i<b;i++)
#define foir(i,a,b) for(long long int i=a;i>b;i--) 
#define pb push_back
#define mkp make_pair
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
// void solve(vector<pair<ll,ll> >& P,ll s,ll n){
//     sort(P.begin(),P.end());
//     bool result = true;
//     for(int i=0;i<n;i++){
//         if(s<=P[i].first){
//             result = false;
//             break;
//         }
//         else{
//             s += P[i].second;
//         }
//     }
//     if(result)
//         printf("YES\n");
//     else
//         printf("NO\n");
// }
bool sortbysec(const pair<ll,ll> &a, const pair<ll,ll> &b)
{
    if(a.first==b.first){
        return a.second<b.second;
    }
    // return (a.second<b.second);
    return (a.first>b.first);
    return false;
}
int main(){ 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    fast;
    ll s,n,nn;c(s);c(n);nn=n;
    vector <pair<ll,ll>> v;
    while(nn--){
        ll v1,v2;
        c(v1);c(v2);
        v.pb(mkp(v1,v2));
    }
    // solve(v,s,n);
    sort(v.begin(), v.end());
    // reverse(v.begin(), v.end());
    bool flag=0;
    fori(i,0,s(v)){
        // cout<<v[i].first<<" "<<v[i].second<<" "<<s<<" ";
        if(s<=v[i].first){
            flag=1;
            // cout<<"yea"<<"\n";
        }
        else{
            s+=v[i].second;
        }
    }
    puts(flag?"NO":"YES");
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
    return 0;
}