#include<bits/stdc++.h>
using namespace std;
#define ll long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair
bool paircompare(pair<int, int>p1, pair<int, int>p2) {
	if (p1.second > p2.second) {
		return true;
	} else if (p1.second == p2.second) {
		if (p1.first > p2.first) {
			return true;
		}
	}
	return false;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int allpoint = 0;
	int total_b = 0;
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		allpoint += a;
		total_b += b;
		v.PB(MP(a, b));

	}
	sort(v.begin(), v.end(), paircompare);
	for (auto it : v) {
		//cout << it.first << it.second << endl;
	}
	int counter = 1;
	int k = 0;
	int b, a;
	int maxpoints = 0;
	while (counter != 0 and counter != n && k < n) {
		counter--;
		counter += v[k].second;
		maxpoints += v[k].first;
		k++;
	}
	if (total_b >= n) {
		cout << allpoint << endl;
	}
	else if (maxpoints == 0 and n == 1) {
		cout << v[0].first << endl;
	} else {
		cout << maxpoints << endl;
	}

	return 0;

}