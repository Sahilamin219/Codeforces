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
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	// int t;cin>>t;
	int t=1;
	while(t--){
		string s;cin>>s;
		f(i,0,s(s)){
			if(s[i]=='0' or s[i]=='8'){
				cout<<"YES\n"<<s[i];return 0;
			}
		}
		f(i,0,s(s)){
			int a=s[i]-'0';
			int b;
			f(j,i+1,s(s)){
				a=s[i]-'0';
				b=s[j]-'0';
				a*=10;a+=b;
				// cout<<a<<" ";
				if(a%8==0){
					cout<<"YES\n"<<a;return 0;
				}
			}
			f(j,i+1,s(s)){
				a=s[i]-'0';
				a*=100;
				b=s[j]-'0';
				b*=10;
				a+=b;
				// cout<<a<<" ";
				f(k,j+1,s(s)){
					int c=s[k]-'0';
					a+=c;
					// cout<<a<<" ";
					if(a%8==0){
						cout<<"YES\n"<<a;return 0;
					}
					a-=c;
				}
			}
		}
		cout<<"NO";
	}
	return 0;
}