#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	//First Traverse Rows then columns first check each row with boolean as strawberry if no count+=count*[columns]
	//Then go columns wise and change i going deeper check with boolean if no strawberry count+=count*[rows]-[no of rows that doesnt contain strawberry]

	int n, m;
	cin >> n >> m;
	char a[n][m];
	int rows = n, columns = m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}


	//For Travelling through rows
	int count = 0;
	int columns_good = 0;
	for (int i = 0; i < n; i++) {
		bool no_evil = true;
		for (int j = 0; j < m; j++) {
			if (a[i][j] == 'S') {
				no_evil = false;
			} else {
				//
			}
		}
		if (no_evil) {
			count += columns;
			columns_good++;

		} else {
			//
		}
	}


	//For Travelling through columns

	for (int j = 0; j < m; j++) {
		bool no_evil = true;
		for (int i = 0; i < n; i++) {
			if (a[i][j] == 'S') {
				no_evil = false;
			} else {
				//
			}
		}
		if (no_evil) {
			count += rows - columns_good;
			/*cout << m << endl;*/
		} else {
			//
		}

	}

	cout << count << endl;














	return 0;
}