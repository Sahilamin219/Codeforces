#include<bits/stdc++.h>
#include<atcoder/all>


#define ll long long
#define rep(A,B,C) for(A=B;A<C;++A)
#define nrep(A, B, C) for (A = C - 1;A >= B;--A)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vv vector

#define fi first
#define se second
#define all(A) A.begin(),A.end()

void mxin(ll& a,ll b){if(a<b)a = b;}
void mnin(ll& a,ll b){if(a>b)a = b;}

using namespace std;
using namespace atcoder;

ll gcd(ll p,ll q){
    if(q==0)
        return p;
    return gcd(q, p % q);
}

/////////////////////////////////////////////////////
//#define MOD 998244353

ll N;
ll X[202020], Y[202020];
pll xs[202020],ys[202020];
ll zati[202020];
map<ll,ll> zat;
ll i, j, k;


int main()
{
    scanf("%lld", &N);
    rep(i,0,N){
        scanf("%lld%lld", &X[i], &Y[i]);
        xs[i] = {X[i], i};
        ys[i] = {Y[i], i};
    }
    sort(xs, xs + N);
    sort(ys, ys + N);
    set<ll> st;
    st.insert(xs[0].second);
    st.insert(xs[1].second);
    st.insert(xs[N - 2].second);
    st.insert(xs[N - 1].second);
    st.insert(ys[0].second);
    st.insert(ys[1].second);
    st.insert(ys[N - 2].second);
    st.insert(ys[N - 1].second);

    vv<ll> av(all(st));
    vv<ll> bv;
    rep(i,0,av.size()){
        rep(j,0,i){
            bv.push_back(max(abs(X[av[i]] - X[av[j]]), abs(Y[av[i]] - Y[av[j]])));
        }
    }

    sort(all(bv));

    printf("%lld\n", bv[bv.size() - 2]);

    return 0;
}