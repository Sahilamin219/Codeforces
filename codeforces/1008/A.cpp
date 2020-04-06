#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
#define fori(i,a,b) for(int i=(a);i<(b);i++)
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
#define INF 0x3f3f3f3f
// map <int, int> mapi;
ll int t_count=0;
string g_vowel="aouie";
int min(int a, int b){
  int c = (a<b) ? a:b;
  return c;
}
// necnei
bool isvowel(char s){
  fori(i,0,g_vowel.size()){
    if(s==g_vowel[i]){
      return true;
    }
  }
  return false;
}
bool check(string s){
  if(!(isvowel(s[s.size()-1])) and s[s.size()-1]!='n'){
    return false;
  }
  fori(i,0,s.size()-1){
    if(isvowel(s[i]) or s[i]=='n'){
      continue;
    }
    else{
      if(!(isvowel(s[i+1]))){
        return false;
      }
    }
  }
  return true;
}
int main(){
  fast;
//   int t;
//   cin>>t;
//   while(t--){
    string str;
    cin>>str;
    if(check(str)){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
//   }
  return 0;
}
// You need to check if after every letter except one of for these "aouien", there goes one of these "aouie". Do not forget to check the last letter.
// you need to iterate over the rectangles from left to right and turn each rectangle in such a way that its height is as big as possible but not
//  greater than the height of the previous rectangle (if it's not the first one). If on some iteration there is no such way to place the
//   rectangle, the answer is "NO".
