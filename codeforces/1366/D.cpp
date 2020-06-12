#include <bits/stdc++.h>
#define f(i,a,b) for(long long int i=a;i<b;i++)
using namespace std;
typedef long long int ll;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	ll N =10000001;
	int n;cin>>n;
	vector<ll> v(n);
	f(i,0,n)cin>>v[i];
	vector<ll> p(N,-1);
	f(i,2,N){
		if(p[i]==-1){
			for(ll j=2*i;j<N;j+=i){
				p[j]=i;
			}
		}
	}
	vector<ll> d1(n,-1);
	vector<ll> d2(n,-1);
	f(i,0,n){
		if(p[v[i]]==-1)continue;
		else{
			d1[i]=p[v[i]];
			while(v[i]%d1[i]==0){
				v[i]=(v[i]/d1[i]);
			}
			if(v[i]==d1[i] or v[i]==1)d1[i]=-1;
			else{
				d2[i]=v[i];
			}
		}
	}
	for(auto x: d1)cout<<x<<" ";
	cout<<"\n";
	for(auto x: d2)cout<<x<<" ";
	return 0;
}