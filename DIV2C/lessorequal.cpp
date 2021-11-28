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

	int n, k;
	cin >> n >> k;

	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);

	int index = k - 1;

	int elements = 0;

	for (int i = 0; i < n; i++) {
		if (a[i] <= a[index]) {
			elements++;
		}
	}

	if (k == 0) {
		if (a[0] == 1) {
			cout << -1 << endl;
			return;
		}
		cout << a[0] - 1 << endl;

	}
	else if (elements == k) {
		cout << a[index] << endl;
	}
	else {
		cout << -1 << endl;
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
	//cin >> t;
	while (t--) {
		solve();
	}

	return 0;


}