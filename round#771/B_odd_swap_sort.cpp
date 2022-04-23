#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,avx,avx2")

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
    int a[n];
    vector<int> evens, odds;

    for (auto &it : a)
    {
        cin >> it;
        if (it & 1)
        {
            odds.push_back(it);
        }
        else
        {
            evens.push_back(it);
        }
    }
    sort(odds.begin(), odds.end());
    sort(evens.begin(), evens.end());

    int m = 0, l = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] & 1)
        {
            if (a[i] == odds[m])
            {
                m++;
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
        else
        {
            if (a[i] == evens[l])
            {
                l++;
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
    }

    cout << "YES" << endl;
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