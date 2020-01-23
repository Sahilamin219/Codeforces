#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main() {
	FAST;
	int t;
	cin>>t;
	while(t--){
		long long int a,b,c,n,m,d;
		cin>>a>>b>>c>>n;
		d=0;
		if(a>=b && a>=c){
			m=a;
			d+=m-b;
			d+=m-c;
		}
		else if(b>=a && b>=c){
			m=b;
			d+=m-a;
			d+=m-c;
		}
		else{
			m=c;
			d+=m-a;
			d+=m-b;
		}
		if(d<=n && (n-d)%3==0){
			cout<<"YES"<<endl;
		}
		else{
		    cout<<"NO"<<endl;
		}
	}
	return 0;
}