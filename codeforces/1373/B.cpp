#include <bits/stdc++.h>
#define s(a) long (a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--) 
#define fi first
#define se second
#define pb push_back
#define mkp make_pair
#define pi pair<int,int>
#define mod 1000000007;
#define bitcount    __builtin_popcountll
#define zrobits(x)	__builtin_ctzll(x)
#define ps(x,y)		fixed<<setprecision(y)<<x
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define debug(x) cout<< #x << ':' << x << endl;
#define show(x) cout<<x<<endl;
#define pret(x) cout<<x<<endl; return 0;
#define disp(x) cout<<x<<" ";
#define let(x,y) cout<<x<<" "<<y<<endl;
using namespace std;
typedef long long int ll;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		int o=0,z=0;
		f(i,0,s(s)){
			if(s[i]=='0'){
				z++;
			}
			else if(s[i]=='1'){
				o++;
			}
		}
		int a=min(o,z);
		if(a%2){
			cout<<"DA"<<endl;
		}
		else{
			cout<<"NET"<<endl;
		}
	}
	return 0;
}