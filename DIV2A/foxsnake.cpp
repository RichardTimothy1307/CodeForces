#include<bits/stdc++.h>
using namespace std;



int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	char a[n][m];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			a[i][j] = '#';

		}
	}
	for (int i = 1; i < n; i += 2) {
		/*cout << i + 1 << endl;*/
		if ((i + 1) % 2 == 0 && (i + 1) % 4 == 2) {
			for (int j = 0; j < m; j++) {
				a[i][j] = '.';
			}
			a[i][m - 1] = '#';
		}
		else {
			for (int j = 0; j < m; j++) {
				for (int j = 0; j < m; j++) {
					a[i][j] = '.';
				}
				a[i][0] = '#';
			}
		}
	}




	for (int k = 0; k < n; k++) {
		for (int j = 0; j < m; j++) {
			cout << a[k][j];
		}
		cout << endl;
	}



	return 0;

}




















 