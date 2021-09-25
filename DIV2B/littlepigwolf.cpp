#include<bits/stdc++.h>
using namespace std;
#define ll long long
double pi = 3.1415926536;

int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	char a[n + 1][m + 1];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			char ch;
			cin >> ch;
			a[i][j] = ch;
		}
	}


	int pigseaten = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {

			if (a[i][j] == 'W') {

				if ((a[i][j + 1] == 'P' && j + 1  < m ) || (a[i - 1][j] == 'P' && i - 1 >= 0) || (a[i + 1][j] == 'P' && i + 1  < n) || (a[i][j - 1] == 'P' && j - 1 >= 0)) {

					pigseaten++;
					a[i][j] = '0';
					if (a[i][j + 1] == 'P') {

						a[i][j + 1] = '0';
					} else if (a[i - 1][j] == 'P') {

						a[i - 1][j] = '0';
					} else if (a[i + 1][j] == 'P') {

						a[i + 1][j] = '0';
					} else if (a[i][j - 1] == 'P') {

						a[i][j - 1] = '0';
					} else {
						//
					}

				}

			}
			else {
				continue;
			}
		}
	}
	cout << pigseaten << endl;

	return 0;
}