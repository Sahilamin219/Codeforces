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
	string s;cin>>s;
	map<int, map<int, int>> m;
	int x=0, y=0;
	for(char c:s){
		m[x-1][y]++;
		m[x+1][y]++;
		m[x][y-1]++;
		m[x][y+1]++;

		x-= (c == 'L');
		x+= (c == 'R');
		y+= (c == 'U');
		y-= (c == 'D');

		if(m[x][y] > 1){
			cout<<"BUG";return;
		}
	}
	cout<<"OK";return;
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