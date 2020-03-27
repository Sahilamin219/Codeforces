#include <bits/stdc++.h>
#define n(a) int(a.size())
#define fori(i,a,b) for(int i=a;i<b;i++) 
#define mod 1000000007
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
const long long int mx=100000;
const long long int m=1000000007;
#define debug(x) cout<< #x << ':' << x << endl;
int main(){
    fast;
    ll t;
    cin>>t;
    while(t--){
        // string s="";
        ll n,k;
        ll count=0;
        cin>>n>>k;
        if(n<k){
            count=(k-n);
        }
        else{
            if(n%k!=0){
                ll a=(n/k);
                ll b=(a+1);
                ll r=(b)*k;
                count=(r-n);
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}