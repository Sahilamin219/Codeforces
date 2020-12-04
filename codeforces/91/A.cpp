#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define deb(v) for(auto x: v){cout<<x<<" ";}cout<<"\n";
#define deb2(v) for(auto x: v){cout<<x.frist<<","<<x.second<<" ";}cout<<"\n";

int32_t main(){
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	#endif
	long long int T=1,i=-1,j=0;//cin>>T;
	while(T--){
		string a,b;cin>>a>>b;
		map<char,int> m;
		for(auto x:a)m[x]++;
		for(auto x:b){if(not m[x]){cout<<-1;exit(0);}}
		ll ans=0, n=a.size();
		ll cur=0, index=0;//willdowith_i
		vector<int> arr[26];
		for(auto x: a)arr[x - 'a'].push_back(index++);
		while( j<b.size() ){
			if( upper_bound( arr[b[j]-'a'].begin(), arr[b[j]-'a'].end(), i) == arr[b[j]-'a'].end() )ans++, i=arr[b[j]-'a'][0];
			else i=arr[b[j]-'a'][upper_bound(arr[b[j]-'a'].begin(), arr[b[j]-'a'].end(), i) - arr[b[j]-'a'].begin()];
			j++;
		}
		cout<<ans+1<<"\n";
	}		
}