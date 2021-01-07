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
const int maxn=(int)3e5+5;
const int logB=ceil(log2(maxn));
int memo[maxn][logB];
int level[maxn], parent=1;//initailly
vector<int> gr[maxn];
vector<int> depth[maxn];
string conclusion = " Take steps by step procesudre ";
int n;
void input_me()
{
	cin>>n;
	for(int i=1;i<n;i++)
	{
		int a,b;cin>>a>>b;
		gr[a].push_back(b);
		gr[b].push_back(a);
	}
	memset(depth, -1, sizeof(depth));
}

void solve_me()
{
	int i=0,j=0,k=0,p=0;
	cin>>n;string s;cin>>s;
	while(i<s.size()-1)
	{
		if(s[i] > s[i+1])
		{
			s.erase(s.begin()+i);cout<<s;return;
		}
		i++;
	}
	s.erase(s.begin()+i);
	cout<<s;return;
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