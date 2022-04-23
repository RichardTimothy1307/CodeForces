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
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0, m = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != i + 1)
        {
            l = i;
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] == i + 1)
                {
                    m = j;
                    flag = true;
                    break;
                }
            }
        }
        if (flag == true)
        {
            break;
        }
    }
    // cout << l << " " << m << endl;
    if (flag == true)
    {
        reverse(a.begin() + l, a.begin() + m + 1);
    }

    for (auto it : a)
    {
        cout << it << " ";
    }
    cout << endl;
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