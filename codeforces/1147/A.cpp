#include <bits/stdc++.h>
#define s(a) long (a.size())
#define f(i,a,b) for(long long int i=a;i<b;i++)
#define r(i,a,b) for(long long int i=a;i>b;i--) 
#define fi first
#define se second
#define pb push_back
#define mkp make_pair
#define pi pair<long long int,long long int>
#define mapi map<long long int,long long int>
#define mod 1000000007;
#define all(x) x.begin(), x.end()
#define lcm(a,b) ((a*b)/__gcd(a,b))
#define zrobits(x)	__builtin_ctzll(x)
#define bitcount    __builtin_popcountll
#define ps(x,y)		fixed<<setprecision(y)<<x
#define negmod(X,Y) X % Y + (X % Y < 0 ? Y : 0)
#define debug(x) cout<< #x << ':' << x << endl;
#define show(x) cout<<x<<endl;
#define pret(x) cout<<x<<endl; return 0;
#define disp(x) cout<<x<<" ";
#define let(x,y) cout<<x<<" "<<y<<endl;
using namespace std;
typedef long long int ll;
#define vi(v,n) vector<long long int> v(n)
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif//freopen("error.txt", "w", stderr);
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	// int t;cin>>t;
	int t=1;
	while(t--){
		ll m,k;cin>>m>>k;
		vi(v,k);
		f(i,0,k)cin>>v[i];
		ll ans=0;
		// set<ll> s;
		// f(i,0,k)s.insert(v[i]);
		// ans=m-s(s);
		vector< pair <ll,ll> > vect;
	    for(ll i=1; i<m; i++)
	    {
	        vect.push_back( make_pair(i+1,i) ); 
	        vect.push_back( make_pair(i,i+1) ); 
	        vect.push_back( make_pair(i,i) ); 
	    }
	    vect.push_back( make_pair(m,m));
	    // for(ll i=0;i<s(vect);i++) 
	    // { 
	    //     cout << vect[i].first << " "<< vect[i].second << endl; 
	    // } 
	    // vector<vector<ll>> bol(k,vector<ll> (k+1,0));
	    // f(i,0,k){
	    // 	f(j,i,k){
	    // 		bol[i][v[i]]=1;
	    // 	}
	    // }
	    vector<ll> bl(m+1,0);
	    f(i,0,k)bl[v[i]]=1;
	    // for(auto x: bol)cout<<x<<" ";
	    // cout<<vect[m-2].fi<<endl;
	    vector<ll> store_f(m+1,-1);
	    f(i,0,k){
	    	if(store_f[v[i]]==-1)store_f[v[i]]=i;
	    }
	    vector<ll> store_l(m+1,-1);
	    f(i,0,k){
	    	store_l[v[i]]=i;
	    }
	    for(ll i=0;i<s(vect);i++)
	    {
	    	if(bl[vect[i].fi] and bl[vect[i].se]){
	    		ll s_1=0,s_2=0;
	    		s_1=store_f[vect[i].first];
	    		s_2=store_l[vect[i].se];
	    		// for(ll j=0;j<k;j++){
	    		// 	if(vect[i].se==v[j]){
	    		// 		s_2=j;//break;
	    		// 	}
	    		// }
	    		// for(ll j=0;j<k;j++){
	    		// 	if(vect[i].fi==v[j]){
	    		// 		s_1=j;break;
	    		// 	}
	    		// }
	    		// cout<<s_1<<" "<<s_2<<endl;
	    		if(s_2<s_1){
	    			ans+=1;
	    			// cout<<"---"<<vect[i].fi<<" "<<vect[i].se<<endl;
	    		}
	    	}
	    	else{
	    		ans+=1;
	    	}
	    }
	    cout<<ans;
	}
	return 0;
}