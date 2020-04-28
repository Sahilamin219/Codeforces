#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define endl "\n"
#define F first
#define S second
#define mp map<ll,ll>
#define vc vector<ll>
#define MAX  *max_element
#define MIN  *min_element
#define max_XOR(a,b) (1 << int(log2(a ^ b) + 1)) - 1//max xor btw range of two numbers..
#define c_ones(number) __builtin_popcountll(number)
#define flip_bits(number) static_cast<unsigned>(~number)
#define all(X) X.begin(),X.end()
#define rep(i,n) for(ll i=0;i<n;i++)
#define loop(itr,n) for(itr=n.begin();itr!=n.end();itr++)
#define FLUSH fflush(stdout)
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef pair<int, int> pairs; 
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector <int> v;
		int flag=0;
		for(int i=0;i<n;i++){
		    int val;cin>>val;
			v.push_back(val);
		}
		if(v.size()>1){
		    sort(v.begin(), v.end());
    		for(int i=1;i<n;i++){
    		    if(abs(v[i]-v[i-1])==1){
    				flag=1;
    				break;
    			}
    		}
		}
		if(flag){
			cout<<2<<"\n";
		}
		else{
			cout<<1<<"\n";
		}
	}
	return 0;
}