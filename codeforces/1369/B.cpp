#include <bits/stdc++.h>
#define s(a) long (a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
using namespace std;
typedef long long int ll;
void printGraph(vector<pair<int,int> > adj[], int V) 
{ 
    int v, w; 
    for (int u = 0; u < V; u++) 
    { 
        cout << "Node " << u+1 << " makes an edge with \n"; 
        for (auto it = adj[u].begin(); it!=adj[u].end(); it++) 
        { 
            v = it->first; 
            w = it->second; 
            cout << "Node " << v+1 << " with edge weight ="
                << w << "\n"; 
        } 
        cout << "\n"; 
    } 
} 
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif//freopen("error.txt", "w", stderr);
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int testcase;cin>>testcase;
	while(testcase--){
		ll n;cin>>n;
		string s;cin>>s;
		int b=1;
		f(i,1,n){
			if(s[i-1]=='1' and s[i]=='0'){
				b=0;break;
			}
		}
		if(s[0]=='1' and n==1)cout<<1<<"\n";
		else if(b){
			cout<<s<<endl;
		}
		else{
			string aa="",bb="";
			ll index=0;
			int bol=1;
			f(i,0,n){
				if(s[i]=='1'){
					bol=0;
				}
				else if(bol==1){
					bb+=s[i];
				}
				else if(s[i]=='0' and bol==0){
					aa="0";
					index=i;
				}
			}
			f(i,index+1,n){
				aa+=s[i];
			}
			cout<<bb;
			cout<<aa<<"\n";
		}
	}
	return 0;
}
// cout.flush();
// fflush(stdout);
// if(i!=l or (n+m)%2!=0)