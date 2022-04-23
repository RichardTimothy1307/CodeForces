#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,avx,avx2,fma")

#include <bits/stdc++.h>
using namespace std;
#define int long long
// double pi = 3.1415926536;
#define PB push_back
#define MP make_pair
const int mod = 1e9 + 7;
// vector<int> graph[(int)1000];  //defining array of vectors
// to_ullong()

void solve()
{

    int n;
    cin >> n;

    int ans = 0;

    while (n--)
    {
        int x;
        cin >> x;
        ans = ans | x;
    }

    cout << ans << endl;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("ccallinput.txt", "r", stdin);
    freopen("ccalloutput.txt", "w", stdout);
#endif
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}