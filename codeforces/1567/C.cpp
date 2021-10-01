#include <bits/stdc++.h>
using namespace std;
int dp[10][2][2];
void solve(){
    string s;cin>>s;
    int n=s.size();
    memset(dp, 0, sizeof(dp));
    dp[n][0][0]=1;
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<10;j++){
            for(int k=0;k<10;k++){
                for(int l=0;l<2;l++){
                    for(int m=0;m<2;m++){
                        if( s[i]-'0' == (j+k+l)%10){
                            dp[i][m][(j+k+l)/10] += dp[i+1][l][m];
                        }
                    }
                }
            }
        }
    }
    cout<<dp[0][0][0]-2<<"\n";
}
int main(){
    int t;cin>>t;
    while(t--)solve();
    return 0;
}
