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
	vector<pair<int, int>> v;
	while (n--) {
		int quality;
		int price;
		cin >> price >> quality;
		v.push_back(make_pair(price, quality));
	}
	sort(v.begin(), v.end());
	bool alex = false;
	for (int i = 0; i < v.size() - 1 ; i++) {
		if ((v[i].first < v[i + 1].first) && (v[i].second > v[i + 1].second)) {
			alex = true;
		}
	}
	if (alex) {
		cout << "Happy Alex" << endl;
	} else {
		cout << "Poor Alex" << endl;
	}



	return 0;
}