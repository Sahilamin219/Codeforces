#include <bits/stdc++.h>
#define Fo(i,a,b) for(long long int i=a;i<b;i++)
using namespace std;
typedef long long int ll;
#define resultv(v) accumulate(all(v),ll(0))
#define productv(v) accumulate(all(v), ll(1), multiplies< ll >())
#define difference(v) accumulate(all(v), ll(0), std::minus<ll>())
#define vi vector<ll> 
#define pii pair<ll, ll> 
#define vvi vector<vi>
#define vpii vector<pii>
#define INF 0x3f3f3f3f
void solve()
{
	int n;cin>>n;
	vi v(n);
	map<ll, ll> m;
	map<ll, ll> mi;
	Fo(i,0,n){
		cin>>v[i], m[v[i]]++;
		if(not mi[v[i]])
		{
			mi[v[i]]=i+1;
		}
	}
	auto i=m.begin();
	for(;i!=m.end();i++)
	{
		if(i->second==1){cout<<mi[i->first]<<"\n";return;}
	}
	cout<<-1<<"\n";
}
int main(){
    int t=1;cin>>t;
    while(t--)solve();
    exit(0);
    return 0;
}