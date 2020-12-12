#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define deb(v) for(auto x: v){cout<<x<<" ";}cout<<"\n";
#define deb2(v) for(auto x: v){cout<<x.frist<<","<<x.second<<" ";}cout<<"\n";
struct hash_pair { 
    template <class T1, class T2> 
    size_t operator()(const pair<T1, T2>& p) const
    { 
        auto hash1 = hash<T1>{}(p.first); 
        auto hash2 = hash<T2>{}(p.second); 
        return hash1 ^ hash2;
    }
};
int ans=0;
int solve(string s, int ind)
{
	if (s.size() == 1){
		return  0 + !(s[0] == char('a' + ind) );
	}
	char match = char( 'a' + ind);
	int len=s.size()/2;
	int first=0, second=0, changes=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i] != match)first++;
	}
	for(int i=0;i<len;i++)
	{
		if(s[i] != match)second++;
	}
	first-=second;
	string s1="", s2="";
	for(int i=0;i<len;i++)s1+=s[i];
	for(int i=len;i<s.size();i++)s2+=s[i];
	changes += min(solve(s1, ind+1) + first, solve(s2, ind+1) +second);
	return changes;
}
int32_t main(){
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	#endif
	ll T=1, i=0, j=0, k=0; cin>>T;
	while(T--){
		int n;cin>>n;
		string s;cin>>s;
		if(n==1){cout<< 0 + !(s[0] == 'a')<<"\n";continue;}
		int length=int(log2(n))+1;// 8 hone pr 4 match krne h ..isilye
		cout<<solve(s, 0)<<"\n";
	}
}