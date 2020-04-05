#include <bits/stdc++.h>

using namespace std;

bool give(int n){
    int m=n;
    int flag=1;
    while(n){
        if(n%10!=4 or n%10!=7){
            flag=0;
        }
        n/=10;
    }
    if(flag){
        return true;
    }
    else{
        n=m;
        int A[] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
        int size = 14;
        for(int i=0;i<size;i++){
            if(n%A[i]==0){
                return true;
                // break;
            }
        }
    }
    return false;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;
    if(give(n)){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
    return 0;
} 