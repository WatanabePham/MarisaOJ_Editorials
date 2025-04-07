#include <bits/stdc++.h>

using namespace std;

#define ll          long long
#define FOR(i,a,b)  for (int i=(a), _b = (b); i<=(_b); ++i)
#define FORD(i,a,b) for (int i=(a), _b = (b); i>=(_b); --i)
#define el          cout << '\n'

//--Compare------------------------------------------------------------------------------------
template<class X, class Y> 
    inline bool maximize(X &x, const Y &y){return (x < y) ? x = y, 1 : 0;}

template<class X, class Y> 
    inline bool minimize(X &x, const Y &y){return (x > y) ? x = y, 1 : 0;}

//--Process------------------------------------------------------------------------------------

constexpr int MAXN = 1e5 + 100;
int n;
int cnt[MAXN];

signed main(void)
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin.exceptions(cin.failbit);
    
    cin >> n;
    FOR(i,1,n) 
    {
        int x; cin >> x;
        cnt[x]++;
    }

    ll res = 0;
    FOR(val,1,1e5) 
    {
        if (cnt[val] == 0) continue;
        ll cur = cnt[val];
        res += cur * (cur - 1) / 2LL;
    }

    cout << res;

    cerr << (1.0 * clock() / CLOCKS_PER_SEC);
    return 0;
}
