#include<bits/stdc++.h>
using namespace std;
#define ll long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair
/*bool paircompare(pair<int, int>p1, pair<int, int>p2) {
	if (p1.second < p2.second) {
		return true;
	} else if (p1.second == p2.second) {
		if (p1.first < p2.first) {
			return true;
		}
	}
	return false;
}*/


int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	map<int, vector<int>> mp;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		mp[a].PB(i);
	}
	set<pair<int, int>> ans;
	for (auto it : mp) {
		if (it.second.size() == 1) {
			ans.insert(MP(it.first, 0));
		} else if (it.second.size() == 1) {
			int cd = it.second[1] - it.second[0];
			ans.insert(MP(it.first, cd));
		} else {
			int cd = it.second[1] - it.second[0];
			bool flag = true;
			for (int j = 2; j < it.second.size(); j++) {
				if (it.second[j] - it.second[j - 1] != cd) {
					flag = false;
					break;
				}
			}
			if (flag) {
				ans.insert(MP(it.first, cd));
			} else {
				//
			}
		}
	}
	cout << ans.size() << endl;
	for (auto s1 : ans) {
		cout << s1.first << " " << s1.second << endl;
	}





	return 0;

}