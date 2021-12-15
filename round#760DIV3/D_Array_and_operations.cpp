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

	int n, k;
	cin >> n >> k;

	int a[n];
	for (auto &it : a)cin >> it;


	sort(a, a + n);

	int window = 2 * k;

	int l = n - window;
	//cout << l << endl;
	int ans = 0;
	for (int i = l; i < n - k; i++) {
		ans += (a[i] / a[i + k]);
	}
//	cout << ans << endl;
	for (int i = 0; i < l; i++) {
		ans += a[i];
	}

	cout << ans << endl;

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