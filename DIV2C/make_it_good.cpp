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
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	if (n == 1 or n == 2) {
		cout << 0 << endl;
	}
	else {

		int ans = 1;
		int k = n - 1;
		while (a[k] <= a[k - 1] and k >= 1) {
			ans++;
			k--;
		}

		while (a[k] >= a[k - 1] and k >= 1) {
			ans++;
			k--;
		}

		cout << n - ans << endl;



	}
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
