#include<bits/stdc++.h>
using namespace std;
#define ll long long
double pi = 3.1415926536;

int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	int d, sumtime;
	cin >> d >> sumtime;
	vector<pair<int, int>> v;
	int maxsum = 0;
	int minsum = 0;
	for (int i = 0; i < d; i++) {
		int a, b;
		cin >> a >> b;
		maxsum += b;
		minsum += a;
		v.push_back(make_pair(a, b));
	}
	if (maxsum < sumtime || minsum > sumtime) {
		cout << "NO" << endl;
	}
	else if (d == 1) {
		if (minsum == sumtime) {
			cout << "YES" << endl;
			cout << v[0].first << endl;
		} else if (maxsum == sumtime) {
			cout << "YES" << endl;
			cout << v[0].second << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	else {
		vector<int> v1;
		int x = sumtime;
		for (int i = 0; i < d; i++) {
			v1.push_back(v[i].first);
			x -= v[i].first;
		}
		/*cout << maxsum << endl;*/
		while (x != 0 and x > 0) {
			for (int i = 0; i < d; i++) {
				if ((v1[i] + x) <= v[i].second) {
					v1[i] += x;
					x -= x;
				} else if ((v1[i] + 1) <= v[i].second) {
					v1[i] += 1;
					x -= 1;
				} else {
					//
				}
			}
		}
		if (x == 0) {
			cout << "YES" << endl;
			for (auto it : v1) {
				cout << it << " ";
			}
			cout << endl;
		} else {
			cout << "NO" << endl;

		}


		return 0;
	}
}