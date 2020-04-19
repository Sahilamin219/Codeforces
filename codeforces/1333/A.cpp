#include <bits/stdc++.h>
#define endl "\n";
#define c(n) cin>>n;
#define s(a) int(a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define fg(i,a,b) for(long long int i=a;i>b;i--) 
#define pb push_back
#define mkp make_pair
#define mod 1000000007;
#define w(t) int tc; cin>>tc; while(tc--)
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define debug(x) cout<< #x << ':' << x << endl;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
string gg="abcdefghijklmnopqrstuvwxyz";//"AOYEUI";
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
void solve(int n,int m){
	vector <vector<string> > v(n,vector<string> (m,"B"));
	v[0][0]="W";
	for(auto x: v){
		for(auto y: x){
			cout<<y;
		}cout<<endl;
	}//cout<<endl;
}
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    fast
    w(t){
    	int n,m;c(n)c(m)
    	solve(n,m);
    }
    return 0;
}