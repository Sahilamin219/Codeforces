#include <bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;cin>>n;
	vector<int> v(n);
	vector<int> b(n);
	f(i,0,n)cin>>v[i];
	f(i,0,n)cin>>b[i];
	vector<int> m(n,0);
	f(i,0,n){
		m[b[i]-1]=i;
	}
	vector<int> l(n,0);
	f(i,0,n){
		int j=m[v[i]-1];
		if(j>=i){
			l[j-i]+=1;
		}
		else{
			l[n-i+j]+=1;
		}
	}
	cout<<*max_element(l.begin(),l.end());
	return 0;
}