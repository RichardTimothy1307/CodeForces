#include<bits/stdc++.h>
using namespace std;



int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	int s, n;
	cin >> s >> n;
	bool winner = true;
	vector<pair<int, int>> v;
	while (n--) {
		int x; int y;
		cin >> x; cin >> y;
		v.push_back(make_pair(x, y));
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		if (s > v[i].first) {
			s += v[i].second;
		} else if (s  <= v[i].first) {
			winner = false;
			break;
		} else {
			//
		}
	}
	if (winner) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	return 0;

}




















 