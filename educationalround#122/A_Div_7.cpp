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

	int n;
	cin >> n;

	if (n % 7 == 0)
	{
		cout << n << endl;
		return;
	}

	int no_of_digits = 0;

	int x = n;

	while (x > 0)
	{
		x = x / 10;
		no_of_digits++;
	}

	if (no_of_digits == 1)
	{
		cout << 7 << endl;
		return;
	}
	else if (no_of_digits == 2)
	{
		int i;
		for (i = 14; i < 100; i += 7)
		{
			if (abs(n - i) % 10 == 0)
			{
				cout << i << endl;
				return;
			}
		}

		cout << i << endl;
		return;
	}
	else if (no_of_digits == 3)
	{
		int i;
		for (i = 105; i < 1000; i += 7)
		{
			int k = abs(n - i);
			int no_of_zeroes = 0;
			if (k % 100 == 0)
			{
				// cout << k << endl;
				cout << i << endl;
				return;
			}
		}
		for (i = 105; i < 1000; i += 7)
		{
			int k = abs(n - i);
			int no_of_zeroes = 0;
			if (k % 10 == 0)
			{
				// cout << k << endl;
				cout << i << endl;
				return;
			}
		}

		cout << i << endl;
		return;
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