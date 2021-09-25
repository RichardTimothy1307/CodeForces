#include<bits/stdc++.h>
using namespace std;
#define ll long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair
//long long mod = 1e6 + 3;



int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	vector<pair<int, int>> v, v1;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v.PB(MP(a, b));
	}
	int count = 0;
	for (int i = 0; i < n; i++) {
		int right = 0, left = 0, lower = 0, upper = 0;
		for (int j = 0; j < n; j++) {
			if (i != j) {
				if (v[i].first < v[j].first and v[i].second == v[j].second) {
					right++;
				} else if (v[i].first > v[j].first and v[i].second == v[j].second) {
					left++;
				} else if (v[i].first == v[j].first and v[i].second > v[j].second) {
					lower++;
				} else if (v[i].first == v[j].first and v[i].second < v[j].second) {
					upper++;
				} else {
					//
				}

			}
		}
		//cout << right << left << lower << upper << endl;
		if ((right >= 1) and (left >= 1) and (lower >= 1) and (upper >= 1)) {
			count++;

		}
	}
	cout << count << endl;
	/*for (auto it : v1) {
		cout << it.first << " " << it.second << endl;
	}*/

	return 0;

}
