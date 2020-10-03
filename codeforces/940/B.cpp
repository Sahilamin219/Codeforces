#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,k,a,b;
ll dp(ll x)
{
	if(x<k||k==1)return (x-1)*a;
	if(x%k)return dp(x-x%k)+x%k*a;
	return dp(x/k)+min(b,a*(x-x/k));
}
int main()
{
	cin>>n>>k>>a>>b;
	cout<<dp(n);
}
