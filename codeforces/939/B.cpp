#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define endl '\n'
#define fo(i,a,b) for(int i=a;i<=b;i++)
#define rf(i,a,b) for(int i=a;i>=b;i--) 
#define fast_io ios_base::sync_with_stdio(0);
#define show(x) cout<<x<<endl;
#define pret(x) cout<<x<<endl; return 0;
#define disp(x) cout<<x<<" ";
#define let(x,y) cout<<x<<" "<<y<<endl;
ll MOD=1e9+7;
ll MAX=9223372036854775807;

int main(){
    fast_io;
    ll n,k;
    cin>>n>>k;
    ll a[k+1];
    ll ans=MAX;
    for (int i = 0; i < k; ++i)
    {
    	cin>>a[i+1];
    	ans=min(ans,n%a[i+1]);
    }
    for (int i = 0; i < k; ++i)
    {
    	if(ans==n%a[i+1]){
    		let(i+1,n/a[i+1]);
    		return 0;
    	}
    }
    return 0;
}


