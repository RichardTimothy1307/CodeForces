#include<bits/stdc++.h>
using namespace std;
#define ll long long



int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	int a[m];
	for (int i = 0; i < m; i++) {
		cin >> a[i];
	}
	sort(a, a + m);
	if (a[0] == 1 || a[m - 1] == n) {
		cout << "NO" << endl;
	} else {
		bool yes = true;
		for (int i = 0; i < m - 2; i++) {
			if ((a[i + 1] - a[i]) == 1 && (a[i + 2] - a[i + 1]) == 1) {
				yes = false;
				break;
			}
		}

		if (yes == false) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
	}

	return 0;
}