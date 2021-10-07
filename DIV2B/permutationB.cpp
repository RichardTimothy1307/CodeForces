#include<bits/stdc++.h>
using namespace std;
#define ll long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair




void solve() {
	//!since 0<=2k<=n  so k will be in between 0 to n/2
	int n, k;
	cin >> n >> k;
	if (k == 0) {
		for (int i = 1; i <= 2 * n; i++) {
			cout << i << " ";
		}
		cout << endl;
	}
	else {
		//*can easily do by trial and error
		int a[2 * n + 1];
		for (int i = 1; i <= 2 * n; i++) {
			a[i] = i;
		}
		int m = 1;
		while (m <= k) {
			swap(a[2 * m - 1], a[2 * m]);
			m++;
		}
		for (int i = 1; i <= 2 * n; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}


}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();

	return 0;


}
