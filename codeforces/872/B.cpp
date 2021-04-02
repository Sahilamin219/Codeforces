#pragma GCC optimize ("O3")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse4")
#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
#define int ll
#define all(x) x.begin(), x.end()
#define trav(i,a) for(auto &i:a) 
inline int in(){int x;scanf("%lld",&x);return x;}
const int inf=1e18;
int32_t main()
{
	int n=in();int k=in();
	int mx,mn;
	vector<int> a(n);
	vector<int> lt,rt;
	for(int i=0;i<n;i++)
	{
		a[i]=in();
	}
	if(n==1){cout<<a[0];return 0;}
	mn=*min_element(all(a));mx=*max_element(all(a));
	if(k==1){cout<<mn;return 0;}
	if(k==2)
	{
		lt.push_back(a[0]);rt.push_back(a[n-1]);
		for(int i=1;i<n;i++)lt.push_back(min(lt.back(),a[i]));
		for(int i=n-2;i>=0;i--)rt.push_back(min(rt.back(),a[i]));
		//for(auto i:lt)cout<<i<<" ";cout<<"\n";
		reverse(all(rt));
		//for(auto i:rt)cout<<i<<" ";cout<<"\n";
		int ans=max(lt[0],rt[1]);
		for(int i=1;i<n-1;i++)ans=max(ans,max(lt[i],rt[i+1]));
		cout<<ans;return 0;
	}
	else cout<<mx;
	
}