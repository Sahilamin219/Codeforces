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
int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif//freopen("error.txt", "w", stderr);
    fast
    double n,m,a,b;cin>>n>>m>>a>>b;
    double ans=0;
    if(a<b/m)ans=(n*a);
    else{
    	double ans_1=0,ans_2=0;
    	int k=(n/m);
    	ans_1+=(k*b);
    	ans_1+=(n-m*k)*a;
    	if(m*k<n)k++;
    	ans_2=k*b;
    	// cout<<ans_1<<" "<<ans_2<<" ";
    	ans=min(ans_2,ans_1);
    } 
    cout<<int(ans);
    return 0;
}