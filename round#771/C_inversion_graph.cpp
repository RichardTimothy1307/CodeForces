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

    vector<int> p(n + 1);

    set<int> maxelements; // stores largest value in each component

    int largest = 0;

    for (int j = 1; j <= n; j++)
    {
        cin >> p[j];

        largest = max(largest, p[j]);

        auto it = maxelements.lower_bound(p[j]);

        // p[i]>p[j] for i<j

        vector<int> toremove; // merge

        for (; it != maxelements.end(); it++)
        {
            int val = *it;           // largest value in cc
            toremove.push_back(val); // merging current cc with cc of j
            //	cout << val << endl;
        }

        for (auto it : toremove)
        { // merge all the ccs in the ccs of j
            maxelements.erase(it);
            // cout << "erase" << " " << it << endl;
        }
        // cout << "insert" << " " << largest << endl;
        maxelements.insert(largest); // inserting j
    }

    cout << maxelements.size() << endl;
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