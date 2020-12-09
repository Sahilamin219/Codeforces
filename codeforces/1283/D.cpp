#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define deb(v) for(auto x: v){cout<<x<<" ";}cout<<"\n";
#define deb2(v) for(auto x: v){cout<<x.frist<<","<<x.second<<" ";}cout<<"\n";
int n,k;
map<vector<int>, int> m;
int solve(vector<int> v, vector<int> mask, int ind){
    if(m[mask])return m[mask];
    if(ind==n)
    {
        int ans=0;
        vector<set<int>> s(k);
        for(int i=0;i<n;i++)
        {
            s[mask[i]].insert(v[i]);
        }
        for(int i=0;i<k;i++)
        {
            if(s[i].size()!=(n/k)){ m[mask]=INT_MAX ; return INT_MAX; }
        }
        for(int i=0;i<k;i++)
        {
            ans+= *--s[i].end() - *s[i].begin();
        }
        m[mask] = ans;
        return ans;
    }
    int ans=INT_MAX;
    for(int i=ind;i<n;i++){
	    for(int j=0;j<k;j++)
	    {
	        mask[i]=j;
	        ans = min(ans, solve(v, mask, ind+1) );
	    }
	}
    m[mask]=ans;
    return ans;
}
int minimumIncompatibility(vector<int>& v, int K) {
    k=K;n=v.size();
    vector<int> mask(n,0);
    int ans = solve(v, mask, 0);
    return ans == INT_MAX ? -1 : ans;
}
int32_t main(){
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	#endif
	long long int T=1, i=0, j=0, k=0; //cin>>T;
	while(T--){
		int trees,humans;cin>>trees>>humans;
		vector<ll> vec(trees), res;
		map<ll,ll> mi;
		queue<ll> q;
		for(i=0;i<trees;i++)cin>>vec[i], mi[vec[i]]=0, q.push(vec[i]);
		ll ans=0;
		while(!q.empty())
		{
			if(res.size()==humans)break;
			ll top=q.front();
			// top denotes current x co-ordinate which being filled/processed
			q.pop();
			if(mi[top]!=0)
			{
				ans+=mi[top];
				res.push_back(top);
			}
			if(!mi.count(top-1))
			{
				mi[top-1] = 1 + mi[top];
				q.push(top-1);
			}
			if(!mi.count(top+1))
			{
				mi[top+1] = 1 + mi[top];
				q.push(top+1);
			}
		}
		// sort(res.begin(), res.end());
		cout<<ans<<"\n";
		for(auto x:res)cout<<x<<" ";
		exit(0);
		rotate(vec.begin(), vec.begin() + k, vec.end());
		// int pos = partition_point(vec.begin(), vec.end(), p) - vec.begin();
		for(i=4;i<=5;i++)
		{
			ll nums=0;
			for(j=0;j<16;j++)
			{
				if(i&(1<<j))nums+=pow(2,j), cout<<"OK";
			}cout<<nums<<"\n";
		}

	}
}
// [ (p^q)^(~p^r) ] -> [ q ^r ] we reach to infrence from premisses ^ is for AND but here its OR
void findX1(int arr1[], int n1){
   int* itr1 = max_element(arr1, arr1 + n1);
   int p1 = log2(*itr1) + 1;
   int X1 = 0;
   for (int i = 0; i < p1; i++) {
      int count1 = 0;
      for (int j = 0; j < n1; j++) {
         if (arr1[j] & (1 << i)) {
            count1++;
         }
      }
      if (count1 > (n1 / 2)) {
         X1 += 1 << i;
      }
   }
   long long int sum1 = 0;
   for (int i = 0; i < n1; i++)
      sum1 += (X1 ^ arr1[i]);
   cout << "X = " << X1 << ", Sum = " << sum1;
}