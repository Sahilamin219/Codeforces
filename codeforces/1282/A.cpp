#include<bits/stdc++.h>
#define int long long int
#define init(arr,val) memset(arr,val,sizeof(arr))
#define vec vector<int>
#define pair pair<int,int>
#define pb push_back
#define pf push_front
#define mp make_pair
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopb(i,a,b) for(int i=a;i>=b;i--)
#define vitr vector<int>::iterator
#define sitr set<int>::iterator

using namespace std;
#undef int
int main(){
    // #define int long long int
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b,c,r;
        cin>>a>>b>>c>>r;
        int ans=0;
        if(r==0){
            ans=abs(b-a);
        }
        else{
            int rc=min(c+r,max(a,b));
            int lc=max(c-r,min(a,b));
            ans=abs(b-a)-max(0,rc-lc);
        }
        cout<<ans<<"\n";
    }
    return 0;
}