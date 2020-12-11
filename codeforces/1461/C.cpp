#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
void solve()
{
	// ye to asan dha ..plz pass hoza
	ll n,m;cin>>n>>m;
	vector<ll> a(n+1);
	vector<pair<ll,ld>> b(m);
	for(int i=1;i<n+1;i++)cin>>a[i];
	for(int i=0;i<m;i++)cin>>b[i].first>>b[i].second;
	int k=n;
	while(k>0 and a[k]==k)k--;
	if(k==0){cout<<"1.000000\n";return;}
	ld sub_prob =1.0000000;
	for(int i=0;i<m;i++)
	{
		if(b[i].first >= k)
		{
			sub_prob*=(1.000000 - b[i].second);
		}
	}
	sub_prob=(1.000000 - sub_prob);
	cout<<fixed<<setprecision(6)<<sub_prob<<"\n";
}
int main(){
	int Testcase=1;cin>>Testcase;
	while(Testcase--)solve();
	return 0;
}