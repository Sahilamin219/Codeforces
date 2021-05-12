/*input
1478 194
*/
#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<string> vst;
typedef pair<ll,ll> pll;
typedef pair<char,ll> pcl;
typedef pair<string,ll> psl;
typedef set<ll> sll;
typedef set<char> sc;
typedef set<string> sst;
typedef map<char,ll> mcl;
typedef map<ll,ll> mll;
typedef map<string,ll> msl;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(),c.end()
#define fill(a,v) memset(a,v,sizeof a)
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define srep(i,s) for(ll i=0;s[i]!='\0';i++)
#define PI 3.1415926535897932384626
#define mod 1000000007
#define nn cout<<"\n"
#define sp cout<<" "
#define ifalse ios_base::sync_with_stdio(false),cin.tie(NULL)

ll n=0,k=0;
ll dp[2001][2001][2];


ll ARU(ll x,ll f,ll sz)
{
   // cout<<x<<" | "<<f<<" | "<<sz<<"\n";
    if(sz==k)
        return 1;
    ll &r=dp[x][sz][f];
    if(r!=-1)
        return r;
    ll cnt=0;
    if(f==0)
    {
         rep(i,1,n+1)
         {
           cnt+=(ARU(i,1,sz+1))%mod;
           cnt=cnt%mod;
         }
    }
    else
    {
        ll m=1;
         while(x*m<=n)
         {
            cnt+=(ARU(x*m,1,sz+1))%mod;
            cnt=cnt%mod;
             m++;
         }
    }
    return dp[x][sz][f]=cnt%mod;
}

int main()
{
  ifalse;
  cin>>n>>k;
  fill(dp,-1);
  ll ans=ARU(0,0,0);
  cout<<ans;
  return 0;
}