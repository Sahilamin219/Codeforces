#include <bits/stdc++.h>
#define s(a) int(a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define fg(i,a,b) for(long long int i=a;i>b;i--) 
#define pb push_back
#define mkp make_pair
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
const long long int mod=1000000007;
const long long int MAX=10000007;
#define debug(x) cout<< #x << ':' << x << endl;
#define c(n) cin>>n;
#define endl "\n";
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    fast;
    ll n;c(n);
    vector <ll> v;
    f(i,0,n){
        ll val;c(val);
        v.pb(val);
    }
    // for (auto x: v)cout<<x<<" ";
    // cout<<endl;
    vector <ll> a;
    f(i,0,n){
        a.pb(i);
    }
    int flag=1;
    ll m=n;
    // for (auto x: a)cout<<x<<" ";
    // cout<<endl;
    while(m--){
    	int f=0;
	    f(i,0,n){
	        if(f==0){
	            f=1;
	            if(v[i]==n-1){
	                v[i]=0;
	            }
	            else{
	                v[i]++;
	            }
	        }
	        else{
	            f=0;
	            if(v[i]==0){
	                v[i]=n-1;
	            }
	            else{
	                v[i]--;
	            }
	        }
	    }
	    // for (auto x: v)cout<<x<<" ";
    	// cout<<endl;
        if(a==v){
            flag=0;
            break;
        }
	}
    if(flag){
        cout<<"NO"<<"\n";
    }
    else{
        cout<<"YES"<<"\n";
    }
    return 0;
}