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
	    vector<int> ans;
	    int i=1;
	    while(i<=n){
	        int days=1;
	        int par=p[i];
	        while( par != i){
	            par = p[par];
	            days++;
	        }
	        ans.push_back(days);
	        i++;
	    }
	    for(auto x:ans)cout<<x<<" ";
	    cout<<"\n";
	}
	return 0;
}