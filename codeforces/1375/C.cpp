#include <bits/stdc++.h>
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--) 
#define all(x) x.begin(), x.end()
using namespace std;
typedef long long int ll;
#define INF 0x3f3f3f3f;
long long maximum=numeric_limits<int>:: max();
long long minimum=numeric_limits<int>:: min();
int X[4]={1,0,-1,0};
int Y[4]={0,1,0,-1};
const int cons=501;
int get(ll a, vector<ll> v, ll l, ll h){
    // if (a <= v[l])return l;
    // if (a > v[h])return -1;
    // ll mid=(l+h)/2;
    // if(v[mid]==a or (mid+1<s(v) and v[mid]<a and v[mid+1]>=a))return (mid+1);
    // else if(v[mid]==a or (mid-1>-1 and v[mid]>a and v[mid-1]<=a))return mid;
    // else if(v[mid]>a) return get(a,v,l,mid);
    // else {
    //     return get(a,v,mid,h);
    // }
}
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){return (a.second < b.second);}
int main(){
	// 	print()//std::string.find("string to find")!=std::string::npos
	// cout<<s(s);
	// cin>>n>>m;
	// f(i,0,n){
	// 	string s;cin>>s;
	// 	v.push_back(s);
	// }
	// // for(auto x: v)cout<<x<<endl;
	// vector<vector<int>> horizontal(n,vector<int> (n,0));
	// vector<vector<int>> vertical(n,vector<int> (n,0));
	// for(int i=0;i<n;i++){
	// 	int cnt=0;
	// 	for(int j=0;j<n;j++){
	// 		if(v[i][j]=='.' and j==n-1)cnt++;
	// 		if(v[i][j]=='.' and j!=n-1){
	// 			cnt++;
	// 		}
	// 		else{
	// 			int k=j-1;
	// 			// if(j==1)v[i][0]=1;
	// 			// if(j>1)k=j-1;
	// 			while(k>-1 and v[i][k]=='.'){
	// 				horizontal[i][k]=cnt;
	// 				k--;
	// 			}
	// 			cnt=0;
	// 		}
	// 	}
	// }
	// for(int i=0;i<n;i++){
	// 	int cnt=0;
	// 	for(int j=0;j<n;j++){
	// 		if(v[j][i]=='.' and j==n-1)cnt++;
	// 		if(v[j][i]=='.' and j!=n-1){
	// 			cnt++;
	// 		}
	// 		else{
	// 			// int k;
	// 			// if(j==1)v[0][i]=1;
	// 			// if(j>1)k=j-1;
	// 			int k=j-1;
	// 			while(k>-1 and v[k][i]=='.'){
	// 				vertical[k][i]=cnt;
	// 				k--;
	// 			}
	// 			cnt=0;
	// 		}
	// 	}
	// }
	// // for(auto x:horizontal){
	// // 	for(auto y:x){
	// // 		cout<<y<<" ";
	// // 	}cout<<"\n";
	// // }
	// vector<vector<int>> wgt(n,vector<int> (n,0));
	// f(i,0,n){
	// 	f(j,0,n){
	// 		wgt[i][j]=(vertical[i][j])-m + (horizontal[i][j])-m;
	// 	}
	// }
	// int w=0;
	// f(i,0,n){
	// 	f(j,0,n){
	// 		if(w<wgt[i][j]){
	// 			w=wgt[i][j];
	// 			maxi_x=i+1;
	// 			max_y=j+1;
	// 		}
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif//freopen("error.txt", "w", stderr);
    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll> v(n);f(i,0,n)cin>>v[i];
     	if(v[0]<v[n-1] or v[n-1]==*max_element(all(v))){
     		cout<<"YES"<<"\n";
     	}
     	else{
     		cout<<"NO"<<"\n";
     	}
    }
    return 0;
}
/*
    'Cause I got issues
    But you got 'em too
    So give 'em all to me
    And I'll give mine to you
    Bask in the glory
    Of all our problems
    'Cause we got the kind of love
    It takes to solve 'em
*/