#include <bits/stdc++.h>
#define Fo(i,a,b) for(long long int i=a;i<b;i++)
using namespace std;
typedef long long int ll;
#define vi vector<ll> 
#define pii pair<ll, ll> 
void solve()
{
	ll n;cin>>n;
	vi v(n);
	map<ll, ll> m;
	cin>>v[0];m[v[0]]++;
	Fo(i,1,n)
	{
		cin>>v[i];
		if(v[i]!=v[i-1])m[v[i]]++;
	}
	if(m.size()==1)cout<<0;
	else
	{
		if(m.size()==n)cout<<1;
		else
		{
			auto i=m.begin();
			ll ans=(1e6);
			for(;i!=m.end();i++)
			{
				if(v[0]==i->first)i->second--;
				if(v[n-1]==i->first)i->second--;
				ans=min(ans, i->second);
			}
			cout<<ans+1;
		}
	}
	cout<<endl;
}
int main(int argc, char const *argv[]){
    int t=1;cin>>t;
    while(t--)solve();
    exit(0);
    return 0;
}