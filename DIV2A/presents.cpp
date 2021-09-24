#include<bits/stdc++.h>
using namespace std;



int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	map<int, int> m;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		m[x] = i + 1;
	}
	for (auto it : m) {
		cout << it.second << " ";
	}








	return 0;

}




















 