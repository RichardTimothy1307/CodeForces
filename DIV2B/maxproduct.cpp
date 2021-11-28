#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,avx,avx2")

#include<bits/stdc++.h>
using namespace std;
#define int long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair
const int mod = 1e7;
//vector<int> graph[(int)1000];  //defining array of vectors





void solve() {

	int n;
	cin >> n;

	vector<int> v(n);

	for (int i = 0; i < n; i++) {

		cin >> v[i];
	}
	sort(v.begin(), v.end());
	// -1 -2 1 2 3 4 5   //last 2 first 3 or last 4 and first 1 or last 1 and first 4

	int maxi = -1e18;
	for (int i = 0; i < 5; i++) {

		int a, b, c, d, e;

		a = (n - 1 + i) % n;   //to not get out of range
		b = (n - 2 + i) % n;
		c = (n - 3 + i) % n;
		d = (n - 4 + i) % n;
		e = (n - 5 + i) % n;

		//	cout << e << " " << d << " " << c << " " << b << " " << a << endl;

		int max_value = v[a] * v[b] * v[c] * v[d] * v[e];

		maxi = max(max_value, maxi);

	}

	cout << maxi << endl;


}







signed main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;


}