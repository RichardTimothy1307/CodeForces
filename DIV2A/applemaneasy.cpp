#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	char a[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}                                              //The question is to find that there is one cell and is surrounded by cells if
	//If they have even number of o that O or 2 or 4 depending on the position
	//Then Yes otherwise if any one cell has odd number that is 1 or 3 then NO
	bool even = true;
	for (int i = 0; i < n; i++) {

		int c = 0;

		for (int j = 0; j < n; j++) {    //Beware of the edge row since using +1 and -1  0 and N

			if (j - 1 >= 0 && a[i][j - 1] == 'o') { //The previous cell in the same row
				c++;
			}
			if (i - 1 >= 0 && a[i - 1][j] == 'o') { //The previous row in the same column
				c++;
			}
			if (j + 1 < n && a[i][j + 1] == 'o') { //The next cell in thr same row but ahead column
				c++;
			}
			if (i + 1 < n && a[i + 1][j] == 'o') { //The below row cell in the same column
				c++;
			}

			if (c % 2 == 1) { //odd number of cell
				even = false;
			}



		}

	}

	if (even) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}






	return 0;
}