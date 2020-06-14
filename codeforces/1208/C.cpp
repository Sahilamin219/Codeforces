#include <bits/stdc++.h>
#define f(i,a,b) for(long long int i=a;i<b;i++)
using namespace std;
typedef long long int ll;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	ll n;cin>>n;
	ll v[n][n];
	int k=0;
	f(i,0,n/2){
		f(j,0,n/2){
			v[i][j]=k*4+1;
			v[i][j+n/2]=k*4+2;
			v[i+n/2][j]=k*4+3;
			v[i+n/2][j+n/2]=k*4;
			k++;
		}
	}
	for(int x=0;x<n;x++){
		for(int y=0;y<n;y++){
			cout<<v[x][y]<<" ";
		}cout<<"\n";
	}
	return 0;
}