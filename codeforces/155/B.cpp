#include <bits/stdc++.h>
#define s(a) int(a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--) 
#define pb push_back
#define mkp make_pair
#define mod 1000000007;
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define debug(x) cout<< #x << ':' << x << endl;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
string gg="abcdefghijklmnopqrstuvwxyz";//"AOYEUI";
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
int max3(int a, int b, int c){return max(a, max(b,c));}
vector <pair<long long int,long long int>> v;
bool sortbysec(const pair<ll,ll> &a, const pair<ll,ll> &b){
	if(a.second==b.second){
		return (a.first>b.first);//a.second < b.second
	}
	return a.second>b.second;
}
void solve(){
	ll n;cin>>n;
	f(i,0,n){
		ll a,b;
		cin>>a>>b;
		v.pb(mkp(a,b));
	}
	sort(v.begin(), v.end(), sortbysec);
	int count=1;
	int i=0;
	int score=0;
	// f(i,0,n)cout<<v[i].first<<" "<<v[i].second<<endl;	
	while(count-- and i<n){
		score+=v[i].first;
		count+=v[i].second;
		i++;
	}
	cout<<score<<endl;
}
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    fast
    int t;
    t=1;
    while(t--){
    	solve();
    }
    return 0;
}