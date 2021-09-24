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
	int p1;
	int p2;
	set<int> v;
	cin >> p1;
	for (int i = 0; i < p1; i++) {
		int x;
		cin >> x;
		v.insert(x);
	}
	cin >> p2;
	for (int i = 0; i < p2; i++) {
		int x;
		cin >> x;
		v.insert(x);
	}
	if (v.size() == n) {
		cout << "I become the guy." << endl;
	} else {
		cout << "Oh, my keyboard!" << endl;
	}

	return 0;

}




















 