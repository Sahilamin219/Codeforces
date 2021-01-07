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
	ll a, b;cin>>a>>b;
	ll lcm=(a*b)/__gcd(a, b);

	ll segemetns_A = (lcm/a);
	ll segemetns_B = (lcm/b);

	if(a < b){
		segemetns_A--;
	}
	else{
		segemetns_B--;
	}
	if(segemetns_A > segemetns_B){cout<< "Dasha";}
	else if(segemetns_A==segemetns_B){cout<<"Equal";}
	else cout<< "Masha";
}
int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	#endif
	int Testcase=1;//cin>>Testcase;
	while(Testcase--)solve_me();
	return 0;
}
// 1M
// 2M
// 3M
// 4D
// 5D
// 6M
// 7M
// 8M
// 9M
// 10D
// 11M
// 12M
// 13D
// 14D
// 15D