#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define endl '\n'
#define fo(i,a,b) for(int i=a;i<=b;i++)
#define rf(i,a,b) for(int i=a;i>=b;i--) 
#define fast_io ios_base::sync_with_stdio(0);
#define show(x) cout<<x<<endl;
#define pret(x) cout<<x<<endl; return 0;
#define disp(x) cout<<x<<" ";
#define let(x,y) cout<<x<<" "<<y<<endl;
ll MOD=1e9+7;
ll MAX=9223372036854775807;

int main(){
    fast_io;
    int n;
    cin>>n;
    int f[n+1];
    for (int i = 0; i < n; ++i)
    {
    	cin>>f[i+1];
    }
    fo(i,1,n){
    	// show(i);
    	int a=f[i];
    	if(a==i) continue;
    	int b=f[a];
    	if(b==a or b==i) continue;
    	if(i==f[b]) {pret("YES");}
    }
    show("NO");
    return 0;
}
