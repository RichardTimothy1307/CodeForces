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

    for (auto &it : a)
        cin >> it;

    bool flag = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            flag = false;
            break;
        }
    }
    if (flag == true)
    {
        cout << 0 << endl;
        return;
    }

    if ((a[n - 1] < a[n - 2]) or (a[n - 2] - a[n - 1]) > a[n - 2])
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        int count = 0;
        vector<vector<int>> v;
        for (int i = n - 3; i >= 0; i--)
        {

            count++;
            a[i] = a[n - 2] - a[n - 1];
            vector<int> sub_v;
            sub_v.push_back(i + 1);
            sub_v.push_back(n - 2 + 1);
            sub_v.push_back(n - 1 + 1);
            v.push_back(sub_v);
        }
        if (count == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << count << endl;
            for (auto &it : v)
            {
                for (auto &it1 : it)
                {
                    cout << it1 << " ";
                }
                cout << endl;
            }
        }
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