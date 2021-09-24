#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, c;
	cin >> n >> c;
	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int max = -1;
	int lent = 0;
	int sell = 0;
	int profit = 0;

	for (int i = 0; i < n - 1; i++) {
		if ((a[i] - a[i + 1]) > max) {
			max = a[i] - a[i + 1];
			lent = a[i];
			sell = a[i + 1];
		}
	}
	profit = lent - sell - c;
	if (profit > 0) {
		cout << profit << endl;
	} else {
		cout << 0 << endl;
	}




	return 0;
}