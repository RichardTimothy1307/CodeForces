#include<bits/stdc++.h>
using namespace std;



int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	map<int, int> m;
	for (int i = 0; i < n; i++) {
		m[a[i]]++;
	}

	if (m[1] < 1 || m[2] < 1 || m[3] < 1) {
		cout << 0 << endl;
	} else {
		int x = min(m[1], m[2]);
		int mini = min(x, m[3]);
		cout << mini << endl;
		while (mini--) {
			for (int i = 0; i < n; i++) {
				if (a[i] == 1) {
					cout << i + 1 << " ";
					a[i] = 4;
					break;
				}
			} for (int i = 0; i < n; i++) {
				if (a[i] == 2) {
					cout << i + 1 << " ";
					a[i] = 4;
					break;
				}
			} for (int i = 0; i < n; i++) {
				if (a[i] == 3) {
					cout << i + 1 << " ";
					a[i] = 4;
					break;
				}
			}
			cout << endl;
		}
	}


	return 0;

}




















 