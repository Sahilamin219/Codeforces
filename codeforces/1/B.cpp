#include <bits/stdc++.h>
#define s(a) long (a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--) 
#define fi first
#define se second
#define pb push_back
#define mkp make_pair
#define pi pair<long long int,long long int>
#define mapi map<long long int,long long int>
#define mod 1000000007;
#define all(x) x.begin(), x.end()
#define lcm(a,b) ((a*b)/__gcd(a,b))
#define zrobits(x)	__builtin_ctzll(x)
#define bitcount    __builtin_popcountll
#define ps(x,y)		fixed<<setprecision(y)<<x
#define negmod(X,Y) X % Y + (X %  Y < 0 ? Y : 0)
#define flip_bits(number) static_cast<unsigned>(~number) 
#define print() cout<<"\n";
#define debug(x) cout<< #x << ':' << x << endl;
#define show(x) cout<<x<<endl;
#define pret(x) cout<<x<<endl; return 0;
#define disp(x) cout<<x<<" ";
#define let(x,y) cout<<x<<" "<<y<<endl;
using namespace std;
typedef long long int ll;
#define vi(v,n) vector<long long int> v(n)
#define vvi(v,n,m) vector<vector<long long int> > v(n, vector<long long int> (m,0));
#define INF 0x3f3f3f3f;
long long maximum=numeric_limits<int>:: max();
long long minimum=numeric_limits<int>:: min();
int check(string s){
	if(s[0]!='R')return 0;
	ll r=0,c=0;
	f(i,0,s(s)){
		if(s[i]=='R'){
			r++;
			if(i+1>s(s))return 0;
			else{
				if(s[i+1]-'0'>9)return 0;
			}
		}
		if(s[i]=='C')c++;
		else if(s[i]!='R' and s[i]!='C' and s[i]-'0'>9)return 0;
	}
	if(r==1 and c==1)return 1;
	return 0;
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	ll t;cin>>t;
	while(t--){
		string s;cin>>s;
		string temp="";
		if(check(s)){
			ll row=0;
			ll r=0,i=s(s)-1;
			int k=1;
			while(s[i]!='C'){i--;}
			int j=i;j--;	
			while(j>0){
				row+=(s[j]-48)*k;
				k*=10;
				j--;
			}
			i=s(s)-1;k=1;
			while(s[i]!='C'){
				r+=(s[i]-48)*k;
				k*=10;
				i--;
			}// cout<<"ris: "<<r<<" ";
			while(r){
				r-=1;
				temp+=('A'+(r%26));
				r/=26;
			}
			reverse(all(temp));
			cout<<temp<<row<<endl;
		}
		else{
			ll i=0;long num=0;temp="";
			while(s[i]-'A'>=0){
				temp+=s[i];i++;
			}
			reverse(all(temp));ll ii=0;
			while(ii<s(temp)){
				num+=(temp[ii]-'A'+1)*(pow(26,ii));
				ii++;
			}
			cout<<"R";for(;i<s(s);i++)cout<<s[i];
			cout<<"C"<<num<<endl;
		}
	}
	return 0;
}