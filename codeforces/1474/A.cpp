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
        return (hash1 ^ hash2);
    }
};

void solve_me()
{
	int n;cin>>n;
	string s;cin>>s;
	cout<<1;
	// s[0]=char(s[0]+1);
	int was_it_added = 1;
	for(int i=1;i<n;i++)
	{
		if( char(s[i] + 1) != char(s[i-1] + was_it_added) )
		{
			cout<<'1';
			was_it_added=1;
		}
		else
		{
			cout<<'0';
			was_it_added=0;
		}
	}cout<<"\n";
	return;
}

int main( int argc, char const *argv[] )
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	int tt = clock();
	#endif
	// cout << fixed << setprecision(18);
	int Testcase=1;assert(cin>>Testcase);
	while(Testcase--)solve_me();
	#ifndef ONLINE_JUDGE
		cerr << "TIME = " << clock() - tt << endl;
		tt = clock();
	#endif
	uint8_t c[100]={'k','o','n' ,' ', 'd','a','r','t','a' ,' ', 'h','a','i', ' ', 'b','h','e','d','i','y','e', ' ', 's','a','i', ' ', '?','?'};cerr<<c;
	return 0;
}