#include "bits/stdc++.h"
using namespace std;
int main() {
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    vector<int> v(n);
	    for(auto &x:v)cin>>x;
	    vector<int> a(n+1), p(n+1);
	    for(int i=1;i<=n;i++){
	        a[i]=v[i-1];
	        p[i] = a[i];
	    }
	    vector<int> ans(n+1, -1);
	    int i=1;
	    while(i<=n){
	        if(ans[i] != -1){
	            i++;continue;
	        }
	        int days=1;
	        int par=p[i];
	        vector<int> cycle={i};
	        while( par != i){
	            par = p[par];
	            days++;
	            cycle.push_back(par);
	        }
	        for(auto x: cycle)ans[x] = (days);
	        i++;
	    }
	    for(int x=1;x<=n;x++)cout<<ans[x]<<" ";
	    cout<<"\n";
	}
	return 0;
}