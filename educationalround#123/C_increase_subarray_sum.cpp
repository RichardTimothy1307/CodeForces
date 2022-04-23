#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,avx,avx2,fma")

#include <bits/stdc++.h>
using namespace std;
#define int long long
// double pi = 3.1415926536;
#define PB push_back
#define MP make_pair
#define INF 1000000007
const int mod = 1e9 + 7;

// vector<int> graph[(int)1000];  //defining array of vectors
// to_ullong()

void solve()
{

    int n, x;
    cin >> n >> x;

    int a[n];

    for (auto &it : a)
        cin >> it;

    vector<int> max_sum(n + 1, -INF);

    int maxi_sum = -INF;

    for (int i = 0; i < n; i++)
    {

        int sum = 0;

        for (int j = i; j < n; j++)
        { // j goes from i to n for every i and we get j-i+1 length subarray

            sum += a[j];

            max_sum[j - i + 1] = max(max_sum[j - i + 1], sum);

            maxi_sum = max(maxi_sum, max_sum[j - i + 1]);
        }
    }

    max_sum[0] = 0;

    vector<int> suff_sum(n + 1, max_sum[n]);

    for (int i = n - 1; i >= 0; i--)
    {
        //	cout << suff_sum[i + 1] << " " << max_sum[i] << endl;
        suff_sum[i] = max(suff_sum[i + 1], max_sum[i]);
    }

    for (int i = 0; i <= n; i++)
    {

        cout << max(maxi_sum, suff_sum[i] + i * x) << " ";

        maxi_sum = max(maxi_sum, suff_sum[i] + i * x);
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