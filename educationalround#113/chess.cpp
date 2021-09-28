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
		string s;
		cin >> s;
		char a[n][n];
		int ones = 0, twos = 0;
		for (int i = 0; i < n; i++) {
			if (s[i] == '1') {
				ones++;
			} else {
				twos++;
			}
		}
		if (twos == 1 || twos == 2) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;


			for (int i = 0; i < n; i++) {
				int x = 1;
				for (int j = i; j < n; j++) {
					if (i == j) {
						a[i][j] = 'X';
						continue;
					}
					if (s[i] == '1') {
						a[i][j] = '=';
						a[j][i] = '=';
					}
					else {

						//if the opponent is 2 then make i win j lose //else if the opponent is 1 he has to win
						if (x == 1 && s[j] == '2') {
							a[i][j] = '+';
							a[j][i] = '-';
							x = 2;
						} else {
							a[j][i] = '+';
							a[i][j] = '-';
						}



					}
				}
			}

			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					cout << a[i][j];
				}
				cout << endl;
			}
		}

	}



	return 0;
}