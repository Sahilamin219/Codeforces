#include <bits/stdc++.h>
#define f(i,a,b) for(long long int i=a;i<b;i++)
using namespace std;
typedef long long int ll;
#define INF 0x3f3f3f3f;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int testcase;cin>>testcase;
	while(testcase--){
		ll n;cin>>n;
		vector<ll> v(n);
		f(i,0,n)cin>>v[i];
		vector<ll> myvector;
		myvector.push_back(v[0]);
		bool myflag=true;
		f(i,1,n-1){
			if(abs(v[i]-v[i-1])+ abs(v[i+1]-v[i]) <= abs(v[i+1]-v[i-1])){
				continue;
			}
			else{
				myvector.push_back(v[i]);
			}
		}
		string get="hahahahah";
		myvector.push_back(v[n-1]);
		cout<<myvector.size()<<"\n";
		for(auto yyyy: myvector)cout<<yyyy<<" ";
	}
	return 0;
}