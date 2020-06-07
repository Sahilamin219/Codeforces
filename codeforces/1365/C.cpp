#include <bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
// vector<int> rotation(vector<int> v){
// 	vector<<int> vec;
// 	f(i,1,n)vec.push_back(v[i]);
// 	vec.push_back(v[0]);
// 	return vec;
// }
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;cin>>n;
	vector<int> v(n);
	vector<int> b(n);
	f(i,0,n)cin>>v[i];
	f(i,0,n)cin>>b[i];
	// map<int,int> m;
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