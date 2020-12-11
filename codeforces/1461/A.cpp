#include <bits/stdc++.h>
#define pb push_back
#define F first
#define S second
#define mod 1000000009
#define MAX 100001
#define all(x) x.begin(), x.end()
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define lb(c, x) distance((c).begin(), lower_bound(all(c), (x)))
#define ub(c, x) distance((c).begin(), upper_bound(all(c), (x)))
using namespace std;
typedef long long int ll;
typedef long double ld;
void solve()
{
	int n,k;cin>>n>>k;
	string s="abc";
	for(int i=0;i<n;i++)
	{
		cout<<s[i%3];
	}cout<<"\n";
}
int main(int argc, char const *argv[]){
	int Testcase=1;cin>>Testcase;
	while(Testcase--)solve();
	return 0;
}