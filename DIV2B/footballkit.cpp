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
	int n;
	cin >> n;
	vector<pair<int, int>> v;
	vector<pair<int, int>> ans(0);
	map<int, int> m;

	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		m[x]++; //home dress to add later in home when the teams away will match with opponents home dress
		v.push_back(make_pair(x, y));
		ans.push_back(make_pair(0, 0));
	}
	int total_match = (1 + 1) * (n - 1); //one home and one away into the remaining teams
	for (int i = 0; i < n; i++) {
		int home_dress = (n - 1) + m[v[i].second]; //second because that many times he have to wear home dress
		int away_dress = total_match - home_dress; //subtract from the total dress
		ans[i].first = home_dress;
		ans[i].second = away_dress;
	}
	for (int i = 0; i < n; i++) {
		cout << ans[i].first << " " << ans[i].second << endl;
	}

	return 0;
}