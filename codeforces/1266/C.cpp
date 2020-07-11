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
bool check(string str) 
{ 
    int n = str.length(); 
    // Return false if number is not divisible by 2. 
    int cnt =0;
    f(i,0,n)
    {
    	if ((str[i]-'0')%2==0)cnt++;
    }
    if(cnt<2)return false;
    // If we reach here, number is divisible by 2. 
    // Now check for 3.Compute sum of digits 
    f(i,0,n)
    {
    	if(str[i]-'0'==0){break;}
    	else if(i==n-1)return false;
    }
    int digitSum = 0; 
    for (int i=0; i<n; i++) digitSum += (str[i]-'0'); 
    // Check if sum of digits is divisible by 3 
    return (digitSum % 3 == 0); 
} 
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	//freopen("error.txt", "w", stderr);
	#endif
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int r,c;cin>>r>>c;
	vector<int> row;
	vector<int> col;
	int cnt=1;
	if(r==1 and c==1){cout<<0<<endl;goto skip;}	
	if(c==1){f(i,2,r+2){cout<<i<<" ";}cout<<endl;goto skip;}
	f(i,0,c)col.pb(cnt++);
	f(i,0,r)row.pb(cnt++);
	cnt=0;
	f(i,0,r)
	{
		//don't know whats going in eveyone's life including mine :.(
		f(j,0,c)
		{
			cout<<(j+1+r)*(i+1)<<" ";
		}cout<<"\n";
	}
	skip:
	return 0;
}