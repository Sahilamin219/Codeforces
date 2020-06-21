// i m n't bored yet ...
#include <bits/stdc++.h>
#define s(a) long (a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--) 
#define pb push_back
#define mkp make_pair
#define mod 1000000007;
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define debug(x) cout<< #x << ':' << x << endl;
using namespace std;
typedef long long int ll;
#define INF 0x3f3f3f3f;
ll n,m;
// vector<string> v;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif//freopen("error.txt", "w", stderr);
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	// vector<int> p;
	// f(i,2,1000001){
	// 	int flag=1;
	// 	for(int j=2;(j*j)<=i;j++){
	// 		if(i%j==0){
	// 			flag=0;
	// 			break;
	// 		}
	// 	}
	// 	if(flag)p.pb(i);
	// }
	// p[0]=1;
	// p[1]=1;
	// for(auto x:p)cout<<x<<" ";
	while(t--){
		int n;cin>>n;
		// int ans=1;
		// for(int i=0;i<=n/2;i++){
		// 	if(v[i]==0)ans=i;
		// }
		// cout<<ans<<endl;


		vector<int> v(2*n);
		f(i,0,2*n)cin>>v[i];
		// for(auto x: v)cout<<x<<" ";
		// 	cout<<endl;
		vector<int> even;
		vector<int> odd;
		f(i,0,2*n){
			if(v[i]%2){
				odd.pb(i+1);
			}
			else{
				even.pb(i+1);
			}
		}
		if(s(odd)%2){
			odd.pop_back();
		}
		if(s(even)%2){
			even.pop_back();
		}
		int count=0,flag=1;
		for(int i=0;i<s(odd);i+=2){
			cout<<odd[i]<<" "<<odd[i+1]<<endl;
			count++;
			if(count==n-1){
				flag=0;break;
			}
		}
		if(flag){
			for(int i=0;i<s(even);i+=2){
				cout<<even[i]<<" "<<even[i+1]<<endl;
				count++;
				if(count==n-1){
					flag=0;break;
				}
			}
		}

	// 	vector<int> b(n,0);
	// 	f(i,2,*max_element(v.begin(), v.end())){
	// 		vector<int> a(n,0);
	// 		b=a;
	// 		int cnt=1;
	// 		f(j,0,n){
	// 			int r=(v[j]%i);
	// 			b[j]=cnt;cnt++;
	// 			f(k,0,n){
	// 				if(v[k]%i==(i-r) and b[k]==0){
	// 					b[k]=cnt;cnt++;
	// 				}
	// 			}
	// 		}
	// 		if(count(b.begin(), b.end(), 0)<=2){
	// 			break;
	// 		}
	// 	}
	// 	int flag=1;
	// 	f(i,2,n){
	// 		if(b[i]==i and flag==1){
	// 			cout<<i<<" ";
	// 			flag=0;
	// 		}
	// 		if(flag==0 and b[i]==i){
	// 			flag=1;
	// 			cout<<i<<endl;
	// 		}
	// 	}
	}


	// vector<int> v;
	// for(int i=2;i<n;i++){
	// 	while(n>=i and n%i==0){
	// 		n=(n/i);
	// 		v.push_back(i);
	// 	}
	// }
	// if(n>1)v.push_back(n);
	// for(auto x: v)cout<<x<<" ";
	return 0;
}
// cout.flush();
// fflush(stdout);