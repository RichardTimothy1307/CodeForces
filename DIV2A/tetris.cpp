#include<bits/stdc++.h>
using namespace std;




int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n);
		bool clearit = true;
		for (int i = 0; i < n - 1; i++) {
			if ((a[n - 1] - a[i]) % 2 == 0) {
				//
			} else {
				clearit = false;
			}
		}
		if (clearit) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}