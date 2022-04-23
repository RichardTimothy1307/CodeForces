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

    string s;
    cin >> s;
    map<char, int> m;
    bool flag = true;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'r')
        {
            m['r']++;
        }
        else if (s[i] == 'g')
        {
            m['g']++;
        }
        else if (s[i] == 'b')
        {
            m['b']++;
        }
        else
        {
            //
        }

        if (s[i] == 'R')
        {
            if (m['r'] == 0)
            {
                flag = false;
                break;
            }
        }
        else if (s[i] == 'G')
        {
            if (m['g'] == 0)
            {
                flag = false;
                break;
            }
        }
        else if (s[i] == 'B')
        {
            if (m['b'] == 0)
            {
                flag = false;
                break;
            }
        }
    }

    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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