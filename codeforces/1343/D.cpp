#include <bits/stdc++.h>
#define s(a) int(a.size())
#define f(i,a,b) for(int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--) 
#define pb push_back
#define mkp make_pair
#define mod 1000000007;
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
using namespace std;
typedef long long int ll;
#define INF 0x3f3f3f3f;
long long maximum=numeric_limits<int>:: max();
long long minimum=numeric_limits<int>:: min();
long long int countSetBits(long long int n) 
{ 
    long long int count = 0; 
    while (n > 0) 
    { 
        count++; 
        n &= (n-1); 
    } 
    return count; 
} 
  
// Function that return count of flipped number 
long long int FlippedCount(long long int a, long long int b) 
{ 
    // Return count of set bits in a XOR b 
    return countSetBits(a^b); 
} 

int main(){
	 #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T;cin>>T;
    while(T--){
    	int n,k;cin>>n>>k;
    	vector<int> v(n,0);
    	f(i,0,n)cin>>v[i];
    	vector<pair<int,int>> vec;
    	f(i,0,n/2)vec.push_back(make_pair(min(v[i],v[n-i-1]),max(v[i],v[n-i-1])));
    	map<int,int> mp;
    	vector<int> prefix(2*k+1, 0);
    	for(auto it:vec){
    		int l=it.first+1;
    		int m=it.second+k;
    		mp[it.first+it.second]++;
    		prefix[l]+=1;
    		prefix[m+1]-=1;
    	}
    	int sum=0;
    	f(i,0,2*k+1){
    		sum+=prefix[i];
    		prefix[i]=sum;
    	}
    	int mini=n;
    	f(i,2,2*k+1){
    		int cnt_0=mp[i];
    		int cnt_1=prefix[i]-cnt_0;
    		int cnt_2=(n/2)-cnt_0-cnt_1;
    		int cnt=cnt_1+(2*cnt_2);
    		mini=min(mini,cnt);
    	}
    	cout<<mini<<"\n";
    }
	return 0;
}