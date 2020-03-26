#include<bits/stdc++.h>
using namespace std;
#define ll long long 
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

int main(){
  fast;
  string s;
  cin>>s;
  int k=s[1]-48;
  int flag_a=0,flag_b=0;
//   cout<<k<<" ";
  if(1==k || k==8){
      flag_b=1;
    //   cout<<"me";
  }
  if('a'==s[0] || s[0]=='h'){
      flag_a=1;
  }
  if(flag_a==0 && flag_b==0){
      cout<<8;
  }
  else if(flag_a==0 || flag_b==0){
      cout<<5;
  }
  else{
      cout<<3;
  }
  return 0;
} 