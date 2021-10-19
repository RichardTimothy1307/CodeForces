#include<bits/stdc++.h>
using namespace std;
#define int long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair



void solve() {

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int j = 0;
	vector<int> tiles;
	tiles.PB(a[0]);
	tiles.PB(a[n - 1]);
	while (j < n) {
		if (a[j + 1] >= a[j + 2]) {
			if (j + 1 >= n - 1) {
				break;
			}
			else {
				tiles.PB(a[j + 1]);
				j += 1;
			}

		} else {
			if (j + 2 >= n - 1) {
				break;
			}
			else {
				tiles.PB(a[j + 2]);
				j += 2;
			}

		}
	}
	sort(tiles.begin(), tiles.end());
	cout << tiles[0] << endl;

}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();



	return 0;


}