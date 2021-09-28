#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(pair<int, int> v1, pair<int, int> v2) {
	if (v1.first < v2.first) {
		return true;
	} else if (v1.first == v2.first) {
		if (v1.second < v2.second) {
			return true;
		} else {
			return false;
		}
	} return false;
}

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
		int m;
		cin >> m;
		int a[n * m];
		vector<pair<int, int>> v;
		for (int i = 0; i < m * n; i++) {
			cin >> a[i];
			v.push_back(make_pair(a[i], i));
		}
		sort(v.begin(), v.end(), cmp);
		for (int i = 0; i < v.size(); i++) {
			a[i] = v[i].first;
		}
		int inconvi = 0;
		for (int i = 0; i < v.size(); i += m) {
			for (int j = i; j < i + m; j++) {
				for (int k = i; k < j; k++) {
					if (v[j].first > v[k].first) {
						if (v[j].second < v[k].second) {
							//
						} else {
							inconvi++;
						}
					}
				}
			}
		}

		cout << inconvi << endl;
	}
	return 0;
}