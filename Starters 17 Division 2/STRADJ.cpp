#ifdef ONLINE_JUDGE
#include <bits/stdc++.h>
#pragma GCC optimize("O1")
#pragma GCC optimize("O2")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#else
#include "myheader.h"
#endif
using namespace std;
void input() {return;}
template<typename T1, typename... T2>
    void input(T1 & x, T2&... args){((cin >> x), input(args...));}
void wrt() { cout << "\n"; return;}
template<typename T1, typename... T2>
    void wrt(T1 x, T2... args){((cout << x << ' '), wrt(args...));}
template<typename T> void inlst(T & lst, int x, int y)
    { for(int i = x ; i < y; i++ ) cin >> lst[i]; }
template<typename T> void prlst(T & lst, int x, int y)
    { for(int i = x ; i < y; i++ ) cout << lst[i] << " "[i > y - 1]; wrt(); }
#define boost ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define precision(n) cout.precision(n);
#define ll long long
#define pb push_back
#define fi first
#define se second
#define tests int test; cin >> test; while(test--)
#define fora(i, x, y) for (ll i = x; i < y; ++i)
#define ford(i, x, y) for (ll i = x; i >= y; --i)
#define all(lst) lst.begin(), lst.end()
#define rall(lst) lst.rbegin(), lst.rend()
#define _ceil(a, b) ((a + b - 1) / (b))
#define _sum(lst) accumulate(all(lst), 0ll)
#define cntval(lst, val) count(all(lst), val)
#define lcn(lst, val) (find(all(lst), val) - lst.begin())
#define ub(lst, val) (upper_bound(all(lst), val) - lst.begin())
#define lb(lst, val) (lower_bound(all(lst), val) - lst.begin())
#define sortlst(lst) sort(all(lst))
#define sorted(lst) is_sorted(all(lst))
#define rsortlst(lst) sort(rall(lst))
#define sortarr(x, n) sort(x, x + n)
#define sz(lst) (int)lst.size()
typedef pair<ll, ll> pl;
typedef pair<int, int> pi;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<vl> vovl;
typedef vector<vi> vovi;
typedef vector<string> vs;
typedef map<int, int> mi;
typedef map<ll, ll> ml;
typedef set<ll> sl;
typedef set<int> si;
const ll inf = INT32_MAX, MOD = 1e9 + 7, N = 1e5;
ll _lcm(ll a, ll b) { return (a * b) / gcd(a, b); }
ll  min(ll a, ll b) { return std :: min(a, b); }
ll  max(ll a, ll b) { return std :: max(a, b); }
ll _bits(ll x) { ll cnt = 0; while(x > 0) { cnt++; x >>= 1; } return cnt; }
ll _setbits(ll x) { ll cnt = 0; while(x > 0) { cnt += (x & 1); x >>= 1; } return cnt; }
ll _add(ll x, ll y) { x %= MOD, y %= MOD; return (x + y) % MOD; }
ll _sub(ll x, ll y) { x %= MOD, y %= MOD; return (x - y + MOD) % MOD; }
ll _mul(ll x, ll y) { x %= MOD, y %= MOD; return (x * 1ll * y) % MOD; }
ll _pow(ll x, ll y) { if (y == 0) return 1; else if (y % 2 == 0){
ll _tmp =_pow(x, y / 2); return _mul(_tmp, _tmp); } else return _mul(x, _pow(x, y - 1)); }
ll _inv(ll p) { return _pow(p, MOD - 2); }
ll _div(ll x, ll y) { x %= MOD, y %= MOD; return _mul(x, _inv(y)); }
int main(int argc, char const *argv[])
{
    boost;
    tests
    {
        int n, cnt0, cnt1, flage = 1;
        string str1; cin >> n >> str1;
        cnt0 = cntval(str1, '0'), cnt1 = cntval(str1, '1');
        if (min(cnt0, cnt1) == 0) flage = 0;
        if (min(cnt0, cnt1) >= 2) {
            int move = cnt0 + cnt1 - 2 * min(cnt0, cnt1);
            if (move % 2 == 0) flage = 0;
        }
        wrt(flage ? "Alice" : "Bob");
    }
}