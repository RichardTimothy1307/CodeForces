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

	ll int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s1;
		string s2;
		cin >> s1;
		cin >> s2;
		char a[2][n];
		for (int i = 0; i < n; i++) {
			a[0][i] = s1[i];
		} for (int i = 0; i < n; i++) {
			a[1][i] = s2[i];
		}

		int count = 0;
		for (int j = 0; j < n; j++) {
			if ((a[0][j] == '0' && a[1][j] == '1') || (a[0][j] == '1' && a[1][j] == '0')) {

				count += 2;
			}
			else if (a[0][j] == '0' && a[1][j] == '0') {

				if (((a[0][j + 1] == '0' && a[1][j + 1] == '1') || (a[0][j + 1] == '1' && a[1][j + 1] == '0')) && (j + 1) <= (n - 1) ) {
					count += 3;
					j += 1;
				} else if (a[0][j + 1] == '0' && a[1][j + 1] == '0' && (j + 1) <= (n - 1)) {

					count += 1;
					//j += 1;
				} else if (a[0][j + 1] == '1' && a[1][j + 1] == '1' && (j + 1) <= (n - 1)) {
					count += 2;
					j += 1;
				}
				else {
					count += 1;
				}
			} else if (a[0][j] == '1' && a[1][j] == '1') {

				if (a[0][j + 1] == '1' && a[1][j + 1] == '1' && (j + 1) <= (n - 1)) {
					count += 0;
					//j += 1;
				} else if (a[0][j + 1] == '0' && a[1][j + 1] == '0' && (j + 1) <= (n - 1)) {
					count += 2;
					j += 1;
				} else if (((a[0][j + 1] == '0' && a[1][j + 1] == '1') || (a[0][j + 1] == '1' && a[1][j + 1] == '0')) && (j + 1) <= (n - 1) ) {
					count += 2;
					j += 1;
				} else {
					count += 0;

				}
			}
		}
		cout << count << endl;

	}
	return 0;
}