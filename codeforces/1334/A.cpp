#include <bits/stdc++.h>
#define s(a) int(a.size())
#define fori(i,a,b) for(long long int i=a;i<b;i++)
#define foir(i,a,b) for(long long int i=a;i>b;i--) 
#define pb push_back
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
// void solve(){
// }
int main(){ 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    fast;
    ll t;
    c(t);
    while(t--){
        int n;
        c(n);
        // vector <pair<int,int>> v;
        int flag=0;
        ll n_clear=0,n_plays=0;
        int v1;
        int v2;
        c(v1);
        c(v2);
        n_clear=v2;    
        n_plays=v1;
        // int st_c=v2,st_p=v1;
        // cout<<v1<<" "<<v2<<"  ";
        if(v2>v1){
            flag=1;
            fori(i,1,n){
                c(v1);c(v2);
            }
        }
        else{
            for(int i=1;i<n;i++){
                c(v1);c(v2);
                // v.pb(make_pair(v1,v2));
                if(flag){
                    continue;
                }
                else{
                    if(v2>v1 or n_clear>v2 or n_plays>v1 or v2 - n_clear > v1 - n_plays){
                        flag=1;
                    }
                }
                n_plays=v1;
                n_clear=v2;
                // cout<<v1<<" "<<v2<<" ";
            }
        }
        puts(flag?"NO":"YES");
    }   
    return 0;
}