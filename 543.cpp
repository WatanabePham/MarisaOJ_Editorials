#include <bits/stdc++.h>

using namespace std;

#define ll          long long
#define FOR(i,a,b)  for (int i=(a), _b = (b); i <= (_b); ++i)
#define FORD(i,a,b) for (int i=(a), _b = (b); i >= (_b); --i)
#define el          cout << '\n'

//--Compare------------------------------------------------------------------------------------
template<class X, class Y> 
    inline bool maximize(X &x, const Y &y){return (x < y) ? x = y, 1 : 0;}

template<class X, class Y> 
    inline bool minimize(X &x, const Y &y){return (x > y) ? x = y, 1 : 0;}

//--Process------------------------------------------------------------------------------------

int n;

void solve1(int i, string ans = "")
{
    if (i == 0) return (void) (cout << ans << '\n');

    solve1(i - 1, ans + '0');
    solve1(i - 1, ans + '1');
}

void solve2(int n)
{
    FOR(mask,0,(1 << n) - 1)
    {
        FORD(i,n - 1,0) cout << (((mask) >> (i)) & (1));
        el;
    }
}

void solve3(int n)
{
    --n;
    string ans = "";
    FOR(i,0,n) ans += '0';
    do
    {
        int id = n;
        while (id >= 0 && ans[id] == '1') --id;
        if (id == -1) break;
        ans[id] = '1';
        FOR(i,id + 1,n) ans[i] = '0';
        cout << ans << '\n';
    } while (true);
}

signed main(void)
{
    cin.tie(nullptr)->sync_with_stdio(false);
    cin.exceptions(cin.failbit);
    
    cin >> n;

    srand(time(nullptr));
    int opt = rand() % 3;
    if (opt == 0) return solve1(n), 0; // backtracking
    if (opt == 1) return solve2(n), 0; // bitmask
    if (opt == 2) return solve3(n), 0; // generation

    cerr << (1.0 * clock() / CLOCKS_PER_SEC);
    return 0;
}




