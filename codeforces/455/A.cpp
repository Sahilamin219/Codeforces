#include <bits/stdc++.h>
#define endl "\n";
#define s(a) int(a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--) 
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
    int n;cin>>n;
    if(n==1){
        ll value;
        cin>>value;
        cout<<value;
    }
    else{
        map <ll,ll> m;
        f(i,0,n){
            ll value;
            cin>>value;
            m[value]++;
        }
        vector<pair<ll,ll>> s;
        for(map<ll,ll> :: iterator it=m.begin();it!=m.end();it++)s.pb(mkp(it->first,it->second));
        ll f[s(s)]={0};
        // for(auto x:s)cout<<x.first<<" "<<x.second<<endl;
        f(i,0,s(s)){
            if(i==0)f[0]=s[0].first*s[0].second;
            else if(i==1){
                f[1]=s[1].first*s[1].second;
                if((s[1].first!=s[0].first+1))f[1]+=f[0];
                f[1]=max(f[1],f[0]);
            }
            else{
                int k=1;
                if((s[i].first==s[i-1].first+1))k=2;
                f[i]=(s[i].first*s[i].second)+f[i-k];
                f[i]=max(f[i-1],f[i]);
            }
        }
        // for(auto x:f)cout<<x<<" ";
        cout<<f[s(s)-1]<<endl;
    }
    return 0;
}