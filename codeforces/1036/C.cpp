#include <bits/stdc++.h>
#define forn(i, n) for (int i = 0; i < int(n); i++)
using namespace std;
vector<long long> res;
void precal(int total_digits, int diff_digits, long long cur_n)
{
    if(total_digits == 18) { res.push_back(cur_n); return ; }
    precal(total_digits+1, diff_digits, cur_n*10);
    if(diff_digits < 3)
    {
        for(int i=1;i<10;i++)
        {
            precal(total_digits+1, diff_digits+1, cur_n*10 + i);
        }
    }
}
int main() {
    precal(0, 0, 0);
    res.push_back(1000000000000000000);
    // for(auto x: res) { cout<<x<<" "; } cout<<"\n";
    int T;scanf("%d", &T);
    while(T--)
    {
        long long L, R;
        scanf("%lld%lld", &L, &R);
        printf("%d\n", int(upper_bound(res.begin(), res.end(), R) - lower_bound(res.begin(), res.end(), L)));
    }
    return 0;
}