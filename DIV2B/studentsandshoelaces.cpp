#include<bits/stdc++.h>
using namespace std;
#define ll long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair




void solve() {
	int n, m;
	cin >> n >> m;
	int groups = 0;
	map<int, set<int>> mp; //*for each student its tied friends in the set m[1]={2,3}
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		mp[x].insert(y);
		mp[y].insert(x);
	}
	bool flag = true;
	int ans = 0;
	while (flag) {
		flag = false;
		set<pair<int, int>> deleted;
		for (auto it : mp) {
			if (it.second.size() == 1) //*that means it is connected with only one
			{
				deleted.insert(MP(it.first, *it.second.begin())); //*only one element thats why *it.second.begin()

			}
		}
		if (deleted.size() > 0) {
			//*this means we have removed element we have removed a group consisting of ones in the first go
			groups++;
			for (auto it : deleted) {
				//![1]={2}
				//![2]={1,3,4}
				//![1]={}
				//![2]={3,4}
				//!since we have completed the counting we can remove those from our map
				mp[it.first].erase(it.second); //*erase its connection
				mp[it.second].erase(it.first); //*erase the corresponding connection
			}
			flag = true;
		}
	}
	cout << groups << endl;



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
