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
struct  Data
{
	int min;
	int max;
	int sum;
	Data(int min=0, int max=0, int sum=0) : min(min), max(max), sum(sum) {};
};
void solve_me()
{
	int n, k;cin>>n>>k;
	// vector<Data> storage(n+1);
	char str[n+1];cin>>str;
	int flag=0;
	for(int i=0;i<k;i++)
	{
		char temp = str[i];
		int x = i+k;
		while( x < n) 
		{
			if( temp != str[x] and temp != '?' and str[x] != '?'){flag=1;break;}
			else if(temp == '?' and str[x]!='?')temp=str[x];
			x+=k;
		}
		if(flag)break;
		str[i]=temp;
	}
	if(flag){cout<<"NO\n";return;}
	int cnt_1=0, cnt_0=0, cnt_q;
	for(int i=0;i<k;i++)
	{
		if(str[i]=='1')cnt_1++;
		else if(str[i] == '0')cnt_0++;
		else cnt_q++;
	}
	if(cnt_1 > (k/2) or cnt_0 > (k/2))flag=1;
	cout << (flag ? "NO\n" : "YES\n");
	return;
}
int main( int argc, char const *argv[] ) 
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	int tt = clock();
	#endif
	cout << fixed << setprecision(280);
	int Testcase=1;assert(cin>>Testcase);
	while(Testcase--)solve_me();
	#ifndef ONLINE_JUDGE
		cerr << "TIME = " << clock() - tt << endl;
		tt = clock();
	#endif
	return 0;
}