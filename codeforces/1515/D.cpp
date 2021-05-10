#pragma GCC optimize("O2")
#include<bits/stdc++.h> 
#include<iostream>
using namespace std;
#define int long long int
#define ll long long int
#define ld long double
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second
#define endl '\n'
// __builtin_popcount(x)
#define sp setprecision(15)<<fixed
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl
const int mod=1000000007;
const int INF64=mod*mod+1;

void solve(){
	int n,l,r;
	cin>>n>>l>>r;

	vector<int> lfreq(n+1,0);
	vector<int> rfreq(n+1,0);

	for(int i=0;i<l;i++){
		int x;
		cin>>x;
		lfreq[x]++;
	}
	for(int i=0;i<n-l;i++){
		int x;
		cin>>x;
		rfreq[x]++;
	}

	int ans=0;
	for(int i=1;i<=n;i++){
		int x=min(lfreq[i],rfreq[i]);
		l-=x,r-=x;
		lfreq[i]-=x;
		rfreq[i]-=x;
	}

	// cout<<l<<" "<<r<<endl;

	int pl=0,pr=0;

	for(int i=1;i<=n;i++){
		int x=lfreq[i]/2;
		pl+=x;
	}
	for(int i=1;i<=n;i++){
		int x=rfreq[i]/2;
		pr+=x;
	}

	if(l>r){
		int k=min(2*pl,l-r);
		ans+=k/2;
		l-=k;
	}
	else{
		int k=min(2*pr,r-l);
		ans+=k/2;
		r-=k;
	}

	// cout<<l<<" "<<r<<endl;

	if(l>r)
		swap(l,r);
	ans+=(r-l)/2+(r+l)/2;

	cout<<ans<<endl;
}

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);

	int T=1;
	cin>>T;
	for(int i=1;i<=T;i++){
		// cout<<"Case #"<<i<<": ";
		solve();
	}
	cerr<<"Time : "<<1000*((double)clock())/(double)CLOCKS_PER_SEC<<"ms\n";
}