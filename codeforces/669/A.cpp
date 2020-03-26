#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
#define loopf(i,a,b) for(int i=(a);i<(b);i++)
#define mii map<int,int>
#define pb push_back
#define vii vector<int>
#define F first
#define S second
#define SET(a,b) memset(a,b,sizeof(a))
#define sortv(v) sort(v.begin(),v.end())
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n'
#define ll long long 
int main(){
  fast;
  ll int n;
  cin>>n;
  ll int ans=0;
  if(n==1){
      ans=1;
  }
  else if(n==2){
      ans=1;
  }
  else if(n==3){
      ans=2;
  }
  else if(n==4){
      ans=3;
  }
  else if(n%3==0){
      ans=(2*n)/3;
  }
  else{
      if((n-1)%3==0 || (n-2)%3==0){
          ans=(2*(n-1)/3)+1;
      }
  }
  cout<<ans;
  return 0;
} 