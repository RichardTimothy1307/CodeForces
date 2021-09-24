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
	int n, k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int teams = 0;

	sort(a, a + n);

	if (n < 3) {
		cout << 0 << endl;
	} else {
		for (int i = 0; i <= n - 3; i = i + 3) {
			if (a[i] + k <= 5 && a[i + 1] + k <= 5 && a[i + 2] + k <= 5) {
				teams++;
			}
		}
		cout << teams << endl;
	}



	return 0;

}




















 