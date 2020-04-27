#include <bits/stdc++.h>
#define s(a) int(a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define fg(i,a,b) for(long long int i=a;i>b;i--) 
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
#define INF 0x3f3f3f3f;
long long int sq(ll a){
    return 1LL*a*a;
}
long long int min3(ll a, ll b, ll c){
    return min(a,min(b,c));
}
long long int solve(vector<ll>r, vector<ll>g, vector<ll>b){
    ll ans=9e18;
    // vector<ll>::iterator x;
    for(auto x:r){
        vector<ll>::iterator y=lower_bound(g.begin(), g.end(), x);
        vector<ll>::iterator z=upper_bound(b.begin(), b.end(), x);
        if(y!=g.end() and z != b.begin()){
            z--;
            ll tmp=sq(x-*y)+sq(x-*z)+sq(*y-*z);
            ans=min(ans,tmp);
        }
    }
    return ans;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    fast;
    ll tt;c(tt);
    while(tt--){
        ll nr,ng,nb;
        cin>>nr>>ng>>nb;
        vector<ll> r;
        vector<ll> g;
        vector<ll> b;
        f(i,0,nr){
            ll val;c(val);
            r.pb(val);
        }
        f(i,0,ng){
            ll val;c(val);
            g.pb(val);
        }
        f(i,0,nb){
            ll val;c(val);
            b.pb(val);
        }
        sort(r.begin(), r.end());
        sort(g.begin(), g.end());
        sort(b.begin(), b.end());
        // vector < vector <ll> > drg(nr, vector<ll> (ng,0));
        // vector < vector <ll> > dgb(ng, vector<ll> (nb,0));
        // vector < vector <ll> > dbr(nb, vector<ll> (nr,0));
        // f(i,0,s(r)){
        //     f(j,0,s(g)){
        //         drg[i][j]=(r[i]-g[i]);
        //     }
        // }
        // f(i,0,s(g)){
        //     f(j,0,s(b)){
        //         dgb[i][j]=(g[i]-b[i]);
        //     }
        // }
        // f(i,0,s(b)){
        //     f(j,0,s(r)){
        //         dbr[i][j]=(b[i]-r[i]);
        //     }
        // }
        ll ans1=min(solve(r,g,b),solve(r,b,g));
        ll ans2=min(solve(g,b,r),solve(g,r,b));
        ll ans3=min(solve(b,r,g),solve(b,g,r));
        // cout<<ans1<<" "<<ans2<<" "<<ans3<<"\n";
        cout<<min3(ans1,ans2,ans3)<<"\n";
    }
    return 0;
}