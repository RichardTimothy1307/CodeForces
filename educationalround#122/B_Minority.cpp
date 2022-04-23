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

void solve()
{

	string s;
	cin >> s;

	int count_0 = 0;
	int count_1 = 0;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] - '0' == 0)
		{
			count_0++;
		}
		else
		{
			count_1++;
		}
	}

	if (count_1 < count_0)
	{
		cout << count_1 << endl;
	}
	else if (count_1 > count_0)
	{
		cout << count_0 << endl;
	}
	else
	{
		if (s.size() == 1)
		{
			cout << 0 << endl;
		}
		else
		{
			cout << count_0 - 1 << endl;
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