#include <bits/stdc++.h>
#define s(a) int(a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--) 
#define pb push_back
#define mkp make_pair
#define mod 1000000007;
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define debug(x) cout<< #x << ':' << x << endl;
using namespace std;
typedef long long int ll;
#define INF 0x3f3f3f3f;
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif//freopen("error.txt", "w", stderr);
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    vector<ll> v(n);
    f(i,0,n)cin>>v[i];
    map<ll,ll> m;
    // f(i,0,n){
    // 	map<ll,ll> ::iterator it=m.begin();
    // 	it=m.find(v[i]);
    // 	if(it==m.end())m[v[i]]=i;
    // }
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
   		m.clear();
    }
    cout<<ans;
    return 0;
}