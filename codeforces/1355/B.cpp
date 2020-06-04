#include <bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<b;i++)
#define r(i,a,b) for(int i=a;i>b;i--) 
using namespace std;
int main(){
	 #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--){
    	int n;cin>>n;
    	vector <int> v(n);
        f(i,0,n)cin>>v[i];
        sort(v.begin(), v.end());
        int ans=0;
        int poi=0;
        for (int i = 0; i < n; i++) {
        	poi+=1;
            if (poi == v[i]){
                ans++;
                poi=0;
            }
        }
        cout << ans << '\n';
    }
	return 0;
}