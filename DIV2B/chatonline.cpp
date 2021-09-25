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
	int p, q, l, r;
	cin >> p >> q >> l >> r;
	vector<pair<int, int>> z;
	vector<pair<int, int>> x;
	for (int i = 0; i < p; i++) {
		int a, b;
		cin >> a >> b;
		z.push_back(make_pair(a, b));
	}
	for (int i = 0; i < q; i++) {
		int c, d;
		cin >> c >> d;
		x.push_back(make_pair(c, d));
	}

	int ans = 0;
	for (int i = l; i <= r; i++) {
		int count = 0;
		for (int j = 0; j < p; j++) {
			/*if ((x[0].first + i) > z[0].second) {
				break;
			}*/

			for (int k = 0; k < q; k++) {

				if (((x[k].second + i) < z[j].first) or ((x[k].first + i ) > z[j].second)) {

				} else {

					count++;
				}
				if (count >= 1) {
					break;
				}
			}

		}
		if (count > 0) {
			ans++;
		}


	}
	cout << ans << endl;

	return 0;
}