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
	int m, n;
	cin >> m >> n;
	int a[m][n];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	int b[m][n];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			b[i][j] = 1;
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] == 0) {
				for (int l = 0; l < m; l++) {
					b[l][j] = 0;
				}
				for (int k = 0; k < n; k++) {
					b[i][k] = 0;
				}
			} else {
				//
			}
		}
	}
	int c[m][n];
	int o = 0;
	for (int i = 0; i < m; i++) {

		for (int j = 0; j < n; j++) {
			int sum = 0;
			for (int l = 0; l < n; l++) {
				sum = sum + b[i][l];
			}
			for (int k = 0; k < m; k++) {
				sum = sum += b[k][j];
			}
			if (sum > 0) {
				c[i][j] = 1;
			} else {
				c[i][j] = 0;
			}
		}
	}
	bool nope = false;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] != c[i][j]) {
				nope = true;
				break;
			}
			if (nope == true) {
				break;
			}

		}
	}
	if (nope == true) {
		cout << "NO" << endl;
	} else {

		cout << "YES" << endl;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				cout << b[i][j] << " ";
			}
			cout << endl;
		}
	}


	return 0;
}