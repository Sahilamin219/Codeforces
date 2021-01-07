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

void solve_me()
{
	ll i=0,j=0,k=0,p=0;
	cin>>n;
	ll ans=0;
	ll size=sqrt(pow(10,10))+1;
	vector<int> primes(size,0);
	for(i=2;i<size;i++)
	{
		if(!primes[i] and n%i==0)
		{
			if(i==2)cout<<n/i;
			else n-=i,cout<<1+n/2;
			return;
		}
		else
		{
			for(j=i;j<size;j+=i)
			{
				primes[j]=1;
			}
		}
	}
	cout<<1<<endl;
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