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
    int a[n];
    if (n == 3)
    {
        cout << 3 << " " << 2 << " " << 1 << endl;
        cout << 1 << " " << 3 << " " << 2 << endl;
        cout << 3 << " " << 1 << " " << 2 << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }

    swap(a[2], a[3]);
    int k = n;
    for (auto it : a)
    {
        cout << it << " ";
    }
    cout << endl;
    k--;

    int l = n - 1;

    for (int i = 0; i < k; i++)
    {

        cout << a[l] << " ";

        int j = l + 1;

        while ((j) % n != l)
        {
            cout << a[(j) % n] << " ";
            j++;
        }

        l--;
        cout << endl;
    }
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