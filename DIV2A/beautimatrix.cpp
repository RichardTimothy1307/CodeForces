#include<bits/stdc++.h>
using namespace std;



int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			int x;
			cin >> x;
			a[i][j] = x;
		}
	}
	int x, y;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (a[i][j] == 1) {
				x = i + 1;
				y = j + 1;
				break;
			} else {
				//
			}

		}

	}
	cout << abs(x - 3) + abs(y - 3) << endl;






	return 0;

}




















 