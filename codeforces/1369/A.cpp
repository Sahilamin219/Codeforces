#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int tes;cin>>tes;
	while(tes--){
		ll n;cin>>n;
		if(n%4==0){
			cout<<"YES"<<"\n";
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}