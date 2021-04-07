#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define mod 1000000007
#include<string.h>
#define mod1 998244353
#define inf 1000000000000000000
#define maxn 100006
typedef pair<ll,ll> pll;
typedef pair<int,int> pint;
#define endl '\n'
#define mapint_iterator map<int,int> :: iterator
#define mapll_iterator map<ll,ll> :: iterator
#define setint_iterator set<int> :: iterator
#define setll_iterator set<ll> :: iterator
#define setpint_iterator set<pint> :: iterator
#define setpll_iterator set<pll> :: iterator
#define trace(x) cout<<#x<<": "<<x<<" "<<endl
#define trace2(x,y) cout<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x,y,z) cout<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a,b,c,d) cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define cout1(a) cout<<a<<endl
#define cout2(a,b) cout<<a<<" "<<b<<endl
#define cout3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl
#define cout4(a,b,c,d) cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl
#define vcout(v,i) cout<<v[i].fi<<" "<<v[i].se<<endl
typedef priority_queue<ll,vector<ll>,greater<ll> > pqset;
#define pb push_back
#define fi first
#define se second
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> os;
typedef tree<pint,null_type,less<pint>,rb_tree_tag,tree_order_statistics_node_update> os_pair;
#define mp make_pair
#define acc (ios::sync_with_stdio(false),cin.tie(0))
#define rep(i,n) for(ll i=0;i<n;i++)
#define per(i,n) for(ll i=n-1;i>=0;i--)
#define rep1(i,n) for(ll i=1;i<=n;i++)
#define per1(i,n) for(ll i=n;i>0;i--)
#define repeat(i,start,n) for(ll i=start;i<n;i++)
#define print(a,n) for(ll i=0;i<n;i++){ cout<<a[i]<<" ";}
ll ll_max(ll a,ll b,ll c){return max(a,max(b,c));}
int int_max(int a,int b,int c){return max(a,max(b,c));}
ll ll_min(ll a,ll b,ll c){return min(a,min(b,c));}
int int_min(int a,int b,int c){return min(a,min(b,c));}
ll max(int a,ll b){ return max((ll)a,b);}
ll min(int a,ll b){ return min((ll)a,b);}
ll min(ll a,int b){ return min(a,(ll)b);}
ll max(ll a,int b){ return max(a,(ll)b);}
bool prime[maxn];
ll fact[maxn];
void sieve(ll n){
    memset(prime,true,sizeof(prime));
	prime[1]=false; 
    for (ll p=2;p*p<=n;p++){
        if (prime[p]){  
            for (ll i=p*p;i<=n;i+=p)
                prime[i]=false;
        }
    }
}
ll phi(ll n){
	ll result=n;
	for(ll i=2;i*i<=n;i++){
		if(n%i==0){
			while(n%i==0)
				n/=i;
			result-=(result)/i;
		}
	}
	if(n>1)
		result-=result/n;
	return result;
}
bool compare_string(pair<string,int> a,pair<string,int> b){
	if(a.fi.size()<b.fi.size())
		return true;
	else if(a.fi.size()==b.fi.size()){
		if(a.fi<b.fi)
			return true;
		else
			return false;
	}
	else
		return false;
}
bool compare_string1(string a,string b){
	if(a.size()<b.size())
		return true;
	else if(a.size()==b.size()){
		if(a<b)
			return true;
		else
			return false;
	}
	else
		return false;
}
bool compare(pair<ll,ll> a,pair<ll,ll> b){
	if(a.first<b.first)
		return true;
	else if(a.first==b.first){
		if(a.se>b.se)
			return true;
		else
			return false;
	}
	else
		return false;
}
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){
	if(a.se==b.se)
		return a.fi<b.fi;
    return (a.second<b.second); 
}
ll power(ll a,ll b){
	if(a==1)
		return 1;
	if(b==0)
		return 1;
	ll c=power(a,b/2);
	ll res=1;
	if(b%2){
		res=(c*c)%mod;
		res*=a;
		res%=mod;
	}
	else
		res=((c*c)%mod);
	return res;
}
void dfs_topological(int i,vector<int> v[],bool visited[],int finish[],int &t){
	visited[i]=true;
	rep(j,v[i].size()){
		if(visited[v[i][j]]==false){
			visited[v[i][j]]=true;
			dfs_topological(v[i][j],v,visited,finish,++t);
		}
	}
	finish[i]=(++t);
}
void topologicalSort(vector<int> v[],stack<int> &s,int n){
	int finish[n+1]={0};
	int t=0;
	bool visited[n+1]={0};
	repeat(i,1,n+1){
		if(visited[i]==false)
			dfs_topological(i,v,visited,finish,t);
	}
	vector<pint> v1;
	repeat(i,1,n+1)
		v1.pb({finish[i],i});
	sort(v1.begin(),v1.end());
	rep(i,v1.size())
		s.push(v1[i].se);
}
void bfs(vector<int> v[],int o,int n,int dp[]){
	queue<int> q;
	q.push(o);
	dp[o]=0;
	bool visited[n+1]={0};
	visited[o]=true;
	while(q.empty()==false){
		int a=q.front();
		q.pop();
		for(int i=0;i<v[a].size();i++){
			if(visited[v[a][i]]==false){
				visited[v[a][i]]=true;
				q.push(v[a][i]);
				dp[v[a][i]]=dp[a]+1;
			}
		}
	}
}
ll modInv(ll a){return power(a,mod-2)%mod;}
ll ncr(ll n,ll r){
	ll b=modInv(fact[n-r]);
	ll c=modInv(fact[r]);
	ll a=fact[n]*b;
	a%=mod;
	a*=c;
	a%=mod;
	return a;
}
int binary_Search(int l,int h){
	int low=l;int high=h;int ans=h;
	while(low <= high){
        int mid = (low+high)/2;
        if(1){
            ans = mid;
            high = mid-1;
        }else low = mid+1;
    }
    return ans;
}
void dfs(int i,vector<int> v[],bool visited[]){
	visited[i]=true;
	rep(j,v[i].size()){
		if(visited[v[i][j]]==false){
			visited[v[i][j]]=true;
			dfs(v[i][j],v,visited);
		}
	}
}
void factorial(ll n){
	fact[0]=1;
	for(ll i=1;i<=n;i++){
		fact[i]=fact[i-1]*i;
		fact[i]%=mod;
	}
}
ll lcm(ll a,ll b){
	ll x=__gcd(a,b);
	a/=x;
	b/=x;
	ll sum=a*b*x;
	return sum;
}
int find(int x,int a[]){
	if(a[x]==-1)
		return x;
	return find(a[x],a);
}
void insert(int x,int y,int a[],int size[]){
	if(size[x]>=size[y]){
		size[y]+=size[x]+1;
		a[x]=y;
		return;
	}
	size[x]+=size[y]+1;
	a[y]=x;
}
string convert_to_bit(ll a,int bit){
	string s;
	while(a>0){
		s+=(a%2)+48;
		a/=2;
	}
	while(s.size()<bit)
		s+='0';
	reverse(s.begin(),s.end());
	return s;
}
//ifstream cin("b_read_on.txt"); ofstream cout("output3.txt");
void solve(){
	ll n,m,k;
	cin>>n>>m>>k;
	int a[n];
	vector<int> v;
	rep(i,n)
		cin>>a[i];
	rep(i,n){
		if(a[i]==1){
			int j=i;
			int count=0;
			while(j<n&&a[j]==1){
				count++;
				j++;
			}
			v.pb(count);
			i=j-1;
		}
	}
	int b[m];
	vector<int> v1;
	rep(i,m)
		cin>>b[i];
	rep(i,m){
		if(b[i]==1){
			int j=i;
			int count=0;
			while(j<m&&b[j]==1){
				count++;
				j++;
			}
			v1.pb(count);
			i=j-1;
		}
	}
	vector<pint> v2;
	for(int i=1;i*i<=k;i++){
		if(k%i==0)
			v2.pb({i,k/i});
	}
	sort(v.begin(),v.end());
	vector<pint> v3;
	rep(i,v.size()){
		int j=i;
		int count=0;
		while(v[j]==v[i]&&j<v.size()){
			j++;
			count++;
		}
		v3.pb({count,v[i]});
		i=j-1;
	}
	sort(v1.begin(),v1.end());
	vector<pint> v4;
	rep(i,v1.size()){
		int j=i;
		int count=0;
		while(v1[j]==v1[i]&&j<v1.size()){
			j++;
			count++;
		}
		v4.pb({count,v1[i]});
		i=j-1;
	}
	ll sum=0;
	rep(i,v3.size()){
		rep(j,v4.size()){
			rep(k,v2.size()){
				if(v3[i].se-v2[k].fi+1>0&&v4[j].se-v2[k].se+1>0)
					sum+=v3[i].fi*v4[j].fi*(v3[i].se-v2[k].fi+1)*(v4[j].se-v2[k].se+1);
				if(v3[i].se-v2[k].se+1>0&&v4[j].se-v2[k].fi+1>0&&v2[k].fi!=v2[k].se)
					sum+=v3[i].fi*v4[j].fi*(v3[i].se-v2[k].se+1)*(v4[j].se-v2[k].fi+1);
			}
		}
	}
	cout<<sum<<endl;
}
int main(){
    int t=1;
	//cin>>t;
    while(t--)
    	solve();
}


