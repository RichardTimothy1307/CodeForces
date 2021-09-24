#include<bits/stdc++.h>
using namespace std;



int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	// Find the one that differ from other in even ness
	//there are three conditions all numbers are same one is different
	//all are odd one is even and all are even one is odd
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int index_even = 0, index_odd = 0;
	map<string, int> m;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			m["even"]++;
			index_even = i;
		} else {
			m["odd"]++;
			index_odd = i;
		}
	}

	if (m["even"] == 1) {
		cout << index_even + 1 << endl;

	} else {
		cout << index_odd + 1 << endl;
	}
	return 0;

}




















 