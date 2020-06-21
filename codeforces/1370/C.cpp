#include <bits/stdc++.h>
#define s(a) long (a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--) 
#define pb push_back
#define mkp make_pair
#define mod 1000000007;
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define debug(x) cout<< #x << ':' << x << endl;
using namespace std;
typedef long long int ll;
#define INF 0x3f3f3f3f;
ll n,m;vector<string> str;
int myhahah(ll n){
	for(ll i=3;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int solve(ll n){
	int flag=1;
	if(n==1)flag=0;
	else if(n==2){
		//do sleep
	}
	else if(n%2){
		//do nothing
	}
	else{
		if(log2(n)==ceil(log2(n))){
			flag=0;
		}
		else{
			//do balbbalba
			if(n%4==0){
				// sdvbsyv
			}
			else{
				// flag=0;
				n/=2;
				int my=myhahah(n);
				if(my)flag=0;
			}
		}
	}
	return flag;
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif//freopen("error.txt", "w", stderr);
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--){
		ll n;cin>>n;
		if(solve(n)){	 	
			cout<<"Ashishgup"<<endl;
		}
		else{
			cout<<"FastestFinger"<<endl;
		}
	}
	return 0;
}
// cout.flush();
// fflush(stdout);