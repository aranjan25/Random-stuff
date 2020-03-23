#include <bits/stdc++.h>

using namespace std;

#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma GCC optimize ("-ffloat-store")

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define endl "\n"

#define sz(a) ( (int) (a).size() )
#define all(v) (v).begin(), (v).end()
#define tr(c, it) for(auto (it) = (c).begin(); (it) != (c).end(); it++)
#define pres(c, val) ((c).find(val) != (c).end()) //
#define cpres(c, val) (find(all(c), val) != (c).end()) //

#define pb push_back
#define mp make_pair
#define F first
#define S second

#define forf(i, a, b) for(int i = (a); i < (b); i++)
#define forb(i, a, b) for(int i = (b); i >= (a); i--)
#define fo(i, n) forf(i, n)
#define fob(i, n) forb(i, n-1)

typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pair<int, int> > vpii;

const int INF = 0xFFFFFFFFFFFFFFFL;
const int N = 1e9 + 7;

const auto start_time = std::chrono::high_resolution_clock::now();

void zark() {
    #ifdef ZARK
    auto end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff = end_time - start_time;
    cerr << "Time Taken : "<< diff.count() << "s\n";
    #endif
}

#ifdef ZARK
#include "/home/aranjan/Desktop/CP/header.h"
#else
#define dbg(args...)
#endif

void solve() {
    
}

int32_t main(int32_t argc, char** argv) {
    fastio;
    #ifdef ZARK
    freopen("txt.in", "r", stdin);
    #endif
    // freopen("txt.in", "r", stdin);
    // freopen("txt.out", "w", stdout);
    // cout << fixed << setprecision(35);
    int t;
    cin >> t;
    while(t--) solve();
    zark();
    return 0;
}
