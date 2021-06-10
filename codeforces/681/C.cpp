#include "bits/stdc++.h"
#define int long long

#define mod 1000000007
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

#define zrobits(x)	__builtin_ctzll(x)
#define bitcount	__builtin_popcountll(x)
#define ps(x,y)		fixed<<setprecision(y)<<x
#define negmod(X,Y) X % Y + (X %  Y < 0 ? Y : 0)
#define flip_bits(number) static_cast<unsigned>(~number) 
using namespace std;
#define resultv(v) accumulate(all(v),int(0))
#define removeDuplicates(a) a.resize(unique(all(a))-a.begin())
#define productv(v) accumulate(all(v), int(1), multiplies< int >())
#define difference(v) accumulate(all(v), int(0), std::minus< int >())
#define INF 0x3f3f3f3f
int X[4]={1,0,-1,0};
int Y[4]={0,1,0,-1};

#define MAX_SIZE 12

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){return (a.second < b.second);}
inline int32_t add(int a, int b) { return a + b >= mod ? a + b - mod : a + b; }
inline int32_t mul(int a, int b) { return (a * 1ll * b % mod); }
inline void inc(int& a, int b) { a = add(a, b); }
int mpow(int n, int p)
{
	int res=1;
	while(p)
	{
		if(p&1)(res*=n)%=mod;
		(n*=n)%=mod,p/=2;
	}
	return res;
}
#define deb(v) for(auto x: v){cerr<<x<<" ";}cerr<<"\n";
#define debp(v) for(auto x: v){cout<<x.first<<","<<x.second<<" ";}cout<<"\n";
// int dp[5001][2];
// int n;
// int v[5001];
struct Player{
	int score;
	string name;
};
class Checker{
public:
    static int comparator(Player p1, Player p2)  {
        if(p1.score < p2.score) return -1;
        if(p1.score==p2.score) {
            if(p1.name < p2.name)return 1;
            if(p1.name == p2.name)return 0;
            return -1;
        }
        return 1;
    }
};

void Solve_cf(){
	int n;cin>>n;
	multiset<int> s;
	int count=n;
	vector<pair<string, int>> res;
	while(n--)
	{
		string type;cin>>type;
		if(type=="getMin")
		{
			int vl;cin>>vl;
			if(s.size() and vl == *s.begin()){
				res.push_back({type, vl});
				continue;
			}
			if(s.find(vl) == s.end())
			{
				count+=1;
				res.push_back({"insert", vl});
				s.insert(vl);
			}
			while(*s.begin() != vl){
				// count += m[*s.begin()];
				// while(m[*s.begin()] > 0){
				// 	m[*s.begin()]--;
				// 	res.push_back({"removeMin", -1});
				// }
				s.erase(s.begin());
				res.push_back({"removeMin", -INF});
			}
			res.push_back({type, vl});
			// m[vl]++;
		}
		else if(type=="insert")
		{
			int a;cin>>a;
			s.insert(a);
			// m[a]++;
			res.push_back({type, a});

		}
		else if(type=="removeMin")
		{
			if(s.size()){
				s.erase(s.begin());
			}
			else {
				count++;
				res.push_back({"insert", 0});
				// s.insert(0);
			}
			res.push_back({type, -INF});
		}
	}
	cout<<res.size()<<"\n";
	for(auto x:res){
		cout<<x.first<<" ";
		if(x.second!=-INF)cout<<x.second;
		cout<<"\n";
	}
}

int32_t main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	#endif
	int TestCase=1;//cin>>TestCase;
	while(TestCase--)Solve_cf();
	return 0;
}
