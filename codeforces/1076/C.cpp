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
const ll maxn=(ll)3e5+5;
const ll logB=ceil(log2(maxn));
ll memo[maxn][logB];
ll level[maxn], parent=1;//initailly
vector<ll> gr[maxn];
vector<ll> depth[maxn];
string conclusion = " Take steps by step procesudre ";
ll n;
void input_me()
{
	cin>>n;
	for(ll i=1;i<n;i++)
	{
		ll a,b;cin>>a>>b;
		gr[a].push_back(b);
		gr[b].push_back(a);
	}
	memset(depth, -1, sizeof(depth));
}

inline bool read()
{
	if(!(cin>>n))return false;
	return true;
}

void solve_me()
{
	ll i=0,j=0,k=0,p=0;
	assert(read());
	if(n==0)
	{
		cout << "Y " << 0.0 << " " << 0.0 << endl;return;
	}
	if(n<4)
	{
		cout << "N\n";return;
	}
	double D = sqrt(n*int(n-4));
	double a=(n+D)/2.0, b=(n-D)/2.0; 
	cout << "Y " <<a << " "<< b <<endl;
}
int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	int tt = clock();
	#endif
	cout << fixed << setprecision(9);
	int Testcase=1;assert(cin>>Testcase);
	while(Testcase--)solve_me();
	#ifdef _DEBUG
		cerr << "TIME = " << clock() - tt << endl;
		tt = clock();
	#endif
	return 0;
}

// Deletes all characters between 0th index and str.end() - 6
    //str.erase(str.begin() + 0, str.end() - 6);
// Deletes character at position 4
    //str.erase(str.begin() + 4);
// Deletes 4 characters from index number 1
	//str.erase(1, 4);
// Deletes all characters except first one
   //str.erase(1);
// Deletes all characters
   //str.erase(); 