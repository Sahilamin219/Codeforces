#include "bits/stdc++.h"
#define int long long
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
using namespace std;
const double DINF = numeric_limits<double>::infinity();
long long maximum=numeric_limits<int>:: max();
long long minimum=numeric_limits<int>:: min();
const int mod = 1e9 + 7;
#define INF 0x3f3f3f3f;
string gg="abcdefghijklmnopqrstuvwxyz";//"AOYEUI";
const int maxn = (2e3 + 5);
#define MAX 200001
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define lb(c, x) distance((c).begin(), lower_bound(all(c), (x)))
#define ub(c, x) distance((c).begin(), upper_bound(all(c), (x)))
#define rep(x,start,end) for(auto x=(start)-((start)>(end));x!=(end)-((start)>(end));((start)<(end)?x++:x--))
void solve(){
  	int n;cin>>n;
  	if(n<11){
  		cout<<"NO\n";return;
  	}
  	if(n%11){
  		cout<<"NO\n";
  	}
  	else{
  		cout<<"YES\n";
  	}
  	string s=to_string(n);
  	if(s[s.size()-1] == s[s.size()-2]){
  		while(s[s.size()-1] == s[s.size()-2]){
	  		int k=s.size();
	  		string S=string(k, '1');
	  		int p=stoi(S);
	  		n-=p;
	  		s=to_string(n);
	  	}
	  	if(n%11){
	  		cout<<"NO\n";
	  	}
	  	else{
	  		cout<<"YES\n";
	  	}
  	}
  	else{
  		//FUCK YOUR DREAMS	
  	}
}
int32_t main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	#endif
	int TC;
	cin>>TC;
	while (TC--){
		int n;
		cin>>n;
		
		rep(x,0,20){
			if (n%11==0){
				cout<<"YES"<<endl;
				goto done;
			}
			
			n-=111;
			if (n<0) break;
		}
		cout<<"NO"<<endl;
		
		done:;
	}
}