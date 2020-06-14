// i m n't bored yet ...
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
typedef long long int ll;
#define INF 0x3f3f3f3f;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif//freopen("error.txt", "w", stderr);
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	vector<int> p = {4, 8, 15, 16, 23, 42};
	vector<ll> v(6);
	vector<ll> ans(4);
	f(i,0,4){
		cout<<"? "<<i+1<<" "<<i+2<<"\n";
		cout.flush();
		fflush(stdout);
		cin>>ans[i];
	}
	do{
		int f=1;
		f(i,0,4){
			f=(f&(p[i]*p[i+1]==ans[i]));
		}
		if(f)break;
	}
	while(next_permutation(p.begin(), p.end()));
	cout << "!";
	for(int i = 0; i < 6; i++){
		cout << " " << p[i];
	}
	cout << endl;
	cout.flush();
	fflush(stdout);
	return 0;
}