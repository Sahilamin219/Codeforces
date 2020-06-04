#include <bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
// vector<string> arr;
// vector<vector<int>> chk;
// int m, n,cnt=0;
// bool valid(int i, int j){
// 	return((0<=i) and (i<n)) and ((0<=j) and (j<m) and arr[i][j]=='.' and chk[i][j]==0);
// }
// bool dfs(int i, int j){
// 	chk[i][j]=1;
// 	if(valid(i+1,j))dfs(i+1,j);
// 	if(valid(i,j+1))dfs(i,j+1);
// 	if(valid(i-1,j))dfs(i-1,j);
// 	if(valid(i,j-1))dfs(i,j-1);
// 	return true;
// }
int main(){
 
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;
    vector<int> v(n,0);int k=0;
    int sum=0;
    f(i,0,n){
    	cin>>v[i];
    	if(v[i]>k)k=v[i];
    	sum+=v[i];
    }
    int votres=0;
    votres=(k*n-sum);
    while(votres<=sum){
    	k++;
    	votres=(k*n-sum);
    }
    cout<<k;
    // cin>>n>>m;
    // f(i,0,n){
    // 	vector<int> v;
    // 	f(j,0,m){
    // 		v.push_back(0);
    // 	}
    // 	chk.push_back(v);
    // }
    // f(i,0,n){
    // 	f(j,0,m){
    // 		string a;
    // 		cin>>a;
    // 		arr.push_back(a);
    // 	}
    // }
    // f(i,0,n){
    // 	f(j,0,m){
    // 		if(arr[i][j]=='.' and chk[i][j]==0){
    // 			if(dfs(i,j))cnt++;
    // 		}
    // 	}
    // }
    // cout<<cnt;
	return 0;
}