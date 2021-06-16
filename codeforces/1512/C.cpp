#pragma GCC optimize ("O3")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse4")
#include"iostream"
#include"cassert"
#include"cmath"
#include"cstdio"
#include"cstdlib"
#include"map"
#include"set"
#include"queue"
#include"vector"
#include"algorithm"
#include"numeric"
#include"stack"
using namespace std;
typedef long long ll;
#define int ll
#define all(x) x.begin(), x.end()
inline int in(){int x;scanf("%lld",&x);return x;}
void solve(){
	int ones,zeros;cin>>zeros>>ones;
	string s;cin>>s;
	int n=s.length();
	for(int i=0;i<n;i++)if(s[i]=='?')s[i]=s[n-1-i];
	ones-=count(all(s),'1');
	zeros-=count(all(s),'0');
	int l=0,r=n-1;
	while(l<=r){
		if(l!=r and s[l]=='?' and s[r]=='?'){
			if(zeros>1)
			{zeros-=2;s[r]=s[l]='0';}
			else{
				ones-=2;s[r]=s[l]='1';
			}
		}
		else if(l==r and s[l]=='?'){
			if(ones>0){
				s[l]='1';ones--;
			}
			else if(zeros>0){
				s[l]='0';zeros--;
			}
		}
		l++;r--;
	}
	string ts=s;reverse(all(ts));
	if(ts==s and ones==0 and zeros==0){
		cout<<s<<"\n";
	}
	else{
		puts("-1");
	}
}
signed main(){
	int t;cin>>t;
	while(t--)solve();
}
