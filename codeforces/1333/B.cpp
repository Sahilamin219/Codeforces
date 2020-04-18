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
void solve(int n){
	vector <int> a,b;
	f(i,0,n){
		int v;c(v)
		a.push_back(v);
	}
	f(i,0,n){
		int v;c(v)
		b.push_back(v);
	}
	int no_minusone=1;
	int no_plusone=1;
	f(i,0,n){
		if(a[i]>b[i] and no_minusone){
			cout<<"NO"<<endl;
			return;
		}
		else if(a[i]<b[i] and no_plusone){
			cout<<"NO"<<endl;
			return;
		}
		if(a[i]==-1){
			no_minusone=0;
		}
		else if(a[i]==1){
			no_plusone=0;
		}
	}
	cout<<"YES"<<endl;
}
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    fast
    w(t){
    	int n;c(n)
    	solve(n);
    }
    return 0;
}