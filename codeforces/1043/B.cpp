#include <bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<b;i++)
#define r(i,a,b) for(int i=a;i>b;i--) 
using namespace std;
int main(){
	 #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    vector<int> v(n,0);
    f(i,0,n)cin>>v[i];
    vector<int> d(n,0);
    d[0]=v[0];
    int maxi=d[0];
    f(i,1,n){
    	d[i]=v[i]-v[i-1];
    	if(maxi<d[i])maxi=d[i];
    }
    int ans=1;
   	vector<int> for_ans;
   	for_ans.push_back(n);
   	// for(auto z:d)cout<<z<<" ";
   	// cout<<"\n";
   	f(i,1,n){
   		int flag=1;
   		f(x,0,n){
   			if(d[x]==d[(x+i)%i]){
   				continue;
   			}
   			else{
   				flag=0;break;
   			}
   		}
   		if(flag){
   			ans++;
   			for_ans.push_back(i);
   		}
   	}
   	cout<<ans<<"\n";
   	sort(for_ans.begin(), for_ans.end());
   	f(i,0,for_ans.size()){
   		cout<<for_ans[i]<<" ";
   	}
	return 0;
}