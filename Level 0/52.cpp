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

ll gcd(ll a, ll b)
{
    return (b == 0) ? a : gcd(b, a % b);
}

signed main(void)
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin.exceptions(cin.failbit);
    
    ll a, b;
    cin >> a >> b;
    ll g = gcd(a,b);
    ll lcm = a / g * b;
    cout << g << ' ' << lcm;


    cerr << (1.0 * clock() / CLOCKS_PER_SEC);
    return 0;
}
