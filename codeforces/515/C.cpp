#include <bits/stdc++.h>
#define s(a) int(a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define fg(i,a,b) for(long long int i=a;i>b;i--) 
#define pb push_back
#define mkp make_pair
#define mod 1000000007;
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long int ll;
// const long long int mod=1000000007;
#define debug(x) cout<< #x << ':' << x << endl;
#define c(n) cin>>n;
#define endl "\n";
/* global declaration */
bool flag_g=0;
string gg="abcdefghijklmnopqrstuvwxyz";
string gv="aeiouy";//"AOYEUI";
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
	fast;
	int n;c(n);
	string A,S="";c(A);
	for(int i=0;i<n;i++){
		if(A[i]=='2' || A[i]=='3' || A[i]=='5' || A[i]=='7'){
			S.push_back(A[i]);
		}
		else if(A[i]=='4'){
			S.push_back('3');
			S.push_back('2');
			S.push_back('2');
		}
		else if(A[i]=='6'){
			S.push_back('3');
			S.push_back('5');
		}
		else if(A[i]=='8'){
			S.push_back('7');
			S.push_back('2');
			S.push_back('2');
			S.push_back('2');
		}
		else if(A[i]=='9'){
			S.push_back('2');
			S.push_back('3');
			S.push_back('3');
			S.push_back('7');
		}
	}

	sort(S.begin(),S.end());

	for(int i=S.size()-1;i>=0;i--)
		printf("%c",S[i]);
	
	return 0;
}