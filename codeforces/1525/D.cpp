#include<bits/stdc++.h>
using namespace std ; 
#define int long long int 
#define F first 
#define S second 

int MOD = 998244353 ; 
int mod = 1e9 + 7 ; 
int inf = 1e17 ; 
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const int N = 5005 ; 
int a[N] , dp[N][N] , n ; 
int m1 , m2 ; 
vector<int> free_ , occ_ ; 

int brute( int free_pos , int occ_pos ){
    if( occ_pos == m1 ) 
        return 0 ; 
    if( free_pos == m2 ) 
        return inf ; 
    if( dp[free_pos][occ_pos] != -1 ) 
        return dp[free_pos][occ_pos] ; 
    int curr = abs( free_[free_pos] - occ_[occ_pos] ) + brute( free_pos+1 , occ_pos+1 ) ; 
    curr = min( curr , brute( free_pos+1 , occ_pos ) ) ; 
    dp[free_pos][occ_pos] = curr ; 
    return curr ; 
}
signed main() 
{
    ios_base::sync_with_stdio(false) ; 
    cin.tie(0) ; cout.tie(0) ; 

    cin >> n ; 
    for( int i = 1 ; i <= n ; i++ )
        cin >> a[i] ; 
    for( int i = 1 ; i <= n ; i++ ){
        if( a[i] == 1 ) 
            occ_.emplace_back(i) ; 
        else 
            free_.emplace_back(i) ; 
    }
    m1 = occ_.size() ; 
    m2 = free_.size() ; 
    memset( dp , -1 , sizeof(dp) ) ; 
    cout << brute( 0 , 0 ) ; 

    cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " sec \n";
}