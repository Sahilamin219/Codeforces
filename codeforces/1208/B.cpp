#include <bits/stdc++.h>
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--) 
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    vector<ll> v(n);
    f(i,0,n)cin>>v[i];
    map<ll,ll> m;
    ll ans=n-1;
    f(i,0,n){
    	ll validprefix=1;
   		ll last_valid_ind=n;
   		f(j,0,i){
   			m[v[j]]++;
   			if(m[v[j]]==2){
   				validprefix=0;break;
   			}
   		}
   		r(j,n-1,i-1){
   			m[v[j]]++;
   			if(m[v[j]]==1){
   				last_valid_ind=j;
   			}
   			else{
   				break;
   			}
   		}
   		if(validprefix){
   			ans=min(ans,last_valid_ind-i);
   		}
   		else{
   		    break;
   		}
   		m.clear();
    }
    cout<<ans;
    return 0;
}