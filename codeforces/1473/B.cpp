#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
typedef vector<ll> vi;
struct hash_pair {
    template <class T1, class T2> 
    size_t operator()(const pair<T1, T2>& p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        return hash1 ^ hash2;
    }
};
void solve_me()
{
	string a,b;cin>>a>>b;
	if (a > b)
	{
		swap(a,b);
	}

	if(a[0] != b[0]){
		cout<<-1<<endl;return ;
	}

	int flag=0;
	int i=1, j=1;
	string sa=a, sb=b;
	int la=a.size(), lb= b.size();
	int lc = (la*lb)/__gcd(la,lb);

	for(int x=1;x < lc/la ; x++)a+=sa;
	for(int x=1;x < lc/lb ; x++)b+=sb;

	while(i!=lc)
	{
		if(a[i]!=b[i]){cout<<"-1\n";return;}
		i++;j++;
	}
	cout<<a<<"\n";
}
int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	int tt = clock();
	#endif
	// cout << fixed << setprecision(9);
	int Testcase=1;assert(cin>>Testcase);
	while(Testcase--)solve_me();
	#ifndef ONLINE_JUDGE
		cerr << "TIME = " << clock() - tt << endl;
		tt = clock();
	#endif
	return 0;
}