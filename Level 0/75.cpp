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



signed main(void)
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin.exceptions(cin.failbit);
    
    ll n; cin >> n;
    int res = 0;
    n *= 2LL;
    for (ll i = 2; i * i <= n; ++i)
    {
        if (n % i != 0) continue;

        ll a = i;
        ll b = n / i;
        if (a == b) continue;

        if ((b - a + 1) % 2LL == 0 && (a + b - 1) % 2LL == 0) ++res;
    }
    cout << res;

    cerr << (1.0 * clock() / CLOCKS_PER_SEC);
    return 0;
}
