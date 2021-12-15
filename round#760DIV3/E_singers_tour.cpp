#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,avx,avx2")

#include<bits/stdc++.h>
using namespace std;
#define int long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair
const int mod = 1e9 + 7;
//vector<int> graph[(int)1000];  //defining array of vectors





void solve() {

	int n;
	cin >> n;

	int a[n];
	int b[n];
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	int co_eff = (n * (n + 1)) / 2;
	//cout << sum << " " << co_eff << endl;
	if (sum % co_eff != 0) {
		cout << "NO" << endl;
		return;
	}

	sum = sum / co_eff;
	//cout << sum << endl;
	for (int i = 0; i < n; i++) {
		int diff = a[i] - (a[(n + i - 1) % n] );
		diff = sum - diff;
		if (diff <= 0 or (diff % n)) {
			cout << "NO" << endl;
			return;
		}
		diff = diff / n;
		b[i] = diff;
	}

	cout << "YES" << endl;
	for (auto &it : b) {
		cout << it << " ";
	}
	cout << endl;


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