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

inline bool ispalin(string s)
{
	int i=0, j=s.size()-1;
	while(i<=j)
	{
		if(s[i]!=s[j])return false;
		i++;j--;
	}
	return true;
}
void solve_me()
{
	string s;cin>>s;
	int ans=0, n=s.size(), i=0, ans1=0;
	for(int i=1;i<n;i++)
	{
		ans1=0;
		if(s[i]==s[i-1])ans1++, s[i]='A';
		if(i>=2 and s[i]==s[i-2])ans1++, s[i]='A';
		if(ans1)ans++;
	}
	cout<<ans<<"\n";
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
/*
I solved this problem differently, but with what I believe is a Dynamic Programming solution. In DP questions, you are asked to calculate 
F[i] for some i. In this case, F[i] is the number of candies given to child i. (Then we sum the values.) The complexity is that the value
F[i] depends on other values, in this case for values of i both smaller and larger. The key to Dynamic Programming is that you calculate
the values F[i] in an order such that you always have the previous values (i.e., dependencies) you need. So in this problem, what values 
are needed to calculate F[i]? Well if Ratings[i] is a local minimum, that is, child #i has a lower rating than her neighbors, then we 
should give her only one candy. So her candy amount didn’t depend on other candy amounts. If Ratings[i] is a local maximum, then child
#i gets one more candy than the larger amount of candy between her two neighbors. If Ratings[i] is between Ratings[i-1] and 
Ratings[i+1], then whichever neighbor has a lower rating, child #i gets one more candy than that neighbor. So in summary, F[i] depends 
on 0, 2, or 1 of the adjacent values depending on whether Ratings[i] is a local minimum, maximum, or neither, respectively. So to solve
this problem, you can write helper functions is_min(), is_max(), get_next_min(), and get_next_max(), and use them to find the first 
two local mins; set their candies to 1. Find the single local max between them and iterate inward from the mins to the max 
(up the mountain), giving each child one more candy than the last. Then give the max child one more candy than the neighbor who got 
more than the other. Then repeat by finding the next local max and min. The other important thing is that if two neighbors have the
same rating, then all the children can be split into 2 groups between them, and the two groups can be solved separately. So in a 
subproblem, adjacent children will never have the same rating*/