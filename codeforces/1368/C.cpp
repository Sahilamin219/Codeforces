#include <bits/stdc++.h>
#define s(a) int(a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--) 
#define pb push_back
#define mkp make_pair
#define mod 1000000007;
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define debug(x) cout<< #x << ':' << x << endl;
using namespace std;
int main(){
	int m;cin>>m;
	m++;
	cout<<(3*m)+1<<endl;
	int jj=0;
	while(jj<m){
		cout<<jj<<" "<<jj<<"\n";
		cout<<jj<<" "<<jj+1<<"\n";
		cout<<jj+1<<" "<<jj<<"\n";
		jj++;
	}
	cout<<jj<<" "<<jj;
	return 0;
}