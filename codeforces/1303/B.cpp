#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b); for(long int i=a;i<b;i++)
#define mk make_pair
#define LIMIT 100007
#define MOD 1000000007
#define ll long long int
#define endl '\n'
#define pb push_back
#define FAST std::ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main() 
{ 
    FAST
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    rep(z,0,t)
    {
    	ll n,g,b;
    	cin>>n>>g>>b;
    	ll x=(n+1)/2,y,ans;
    	y=x/g;
    	if(x%g>0) y++;
 
    	ans=x+b*(y-1);
    	//cout<<x<<" "<<y<<" ";
    	if(ans>=n) cout<<ans<<endl;
    	else
    		cout<<n<<endl;
    }
    return 0;
}  	