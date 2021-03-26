#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	
	#ifndef ONLINE_JUDGE
    	freopen("input", "r", stdin);
      //to check for segfault in sublime, uncomment the following line
    	freopen("output", "w", stdout);
    	freopen("error", "w", stderr);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
    	ll n;
    	cin>>n;

    	ll q[n];
    	for(int i=0;i<n;i++){
    		cin>>q[i];
    		q[i]--;
    	}

    	bool seen[n];
    	memset(seen,false,sizeof(seen));

    	int curr=-1;
    	int p=0;
    	for(int i=0;i<n;i++){
    		if(q[i]>curr){
    			curr=q[i];
    			cout<<q[i]+1<<" ";
    			seen[q[i]]=true;
    		}
    		else{
    			while(seen[p])p++;
    			cout<<p+1<<" ";
    			seen[p]=true;
    		}
    	}

    	cout<<"\n";
    	// memset(seen,false,sizeof(seen));

    	set<ll> mySet;
    	for(int i=0;i<n;i++)mySet.insert(i);

    	for(int i=0;i<n;i++){
    		auto it=mySet.upper_bound(q[i]);
    		it--;
    		cout<<(*it)+1<<" ";
    		mySet.erase(it);
    	}

    	cout<<"\n";
    }
}