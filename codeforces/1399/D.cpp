#include <bits/stdc++.h>
#define mod 1000000009
#define MAX 100001
#define all(x) x.begin(), x.end()
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
	int n;string s;cin>>n>>s;
	set<int> pos1, pos2, pos;
	for(int i=0;i<s.size();i++)
	{
		pos.insert(i);
		if(s[i]=='1')pos1.insert(i);
		else pos2.insert(i);
	}
	vector<int> ans(n,0);
	int c=1;
	while(!pos.empty())
	{
		int p = *pos.begin();
		pos.erase(pos.begin());
		auto chr=s[p]-'0';
		if(chr) pos1.erase(pos1.find(p));
		else pos2.erase(pos2.find(p));
		ans[p]=c;
		while(1)
		{
			if(chr)
			{
				auto position=pos2.lower_bound(p);
				if(position==pos2.end())break;
				ans[*position]=c;
				chr=0;
				p=*position;

				pos2.erase(position);
				pos.erase(pos.find(*position));
			}
			else
			{
				auto position=pos1.lower_bound(p);
				if(position==pos1.end())break;
				ans[*position]=c;
				chr=1;
				p=*position;

				pos1.erase(position);
				pos.erase(pos.find(*position));
			}
		}
		c++;
	}
	cout<<*max_element(all(ans))<<"\n";
	for(int i=0;i<n;i++)cout<<ans[i]<<" ";
		cout<<"\n";
;}
int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	#endif
	int Testcase=1;cin>>Testcase;
	while(Testcase--)solve_me();
	return 0;
}