#include<bits/stdc++.h>
using namespace std;
int main(){
  int t; cin>>t;
  while(t--){
    int n,count=0; cin>>n;
    map<int, int> taken;
    int a[n+1]={0};
    for(int i=1;i<=n;i++){
      int val; cin>>val;
      set<int> choice;
      for(int num=1;num<=val;num++){
        int k; cin>>k;
        if(taken[k] == 0) choice.insert(k);
      }
      if(choice.size() != 0){
        a[i] = 1;
        auto it = choice.begin();
        taken[*it] = true;
        count++;
      }
    }

    if(count == n) cout<<"OPTIMAL"<<endl;
    else{
      int tmp;
      for(int i=1;i<=n;i++){
        if(taken[i] == false){
          tmp = i;
          break;
        }
      }
      cout<<"IMPROVE"<<endl;
      for(int i=1;i<=n;i++){
        if(a[i] == 1) continue;
        else{
        cout<<i<<" "<<tmp<<endl;
        break;
        }
      }
    }
  }
  return 0;
}