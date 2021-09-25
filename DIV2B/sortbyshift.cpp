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
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	bool sorted = true;
	for (int i = 0; i < n - 1; i++) {
		if (a[i] <= a[i + 1]) {
			//
		}
		else {
			sorted = false;
		}
	}
	int midpoint = 0;
	int count = 0;
	for (int i = n - 1; i >= 1; i--) {
		if (a[i - 1] <= a[i]) {
			count++;
		} else {
			count++;
			midpoint = i - 1;
			break;
		}
	}
	int count1 = 0;
	int midpoint2 = 0;
	for (int i = 0; i <= midpoint; i++) {
		if (a[i] <= a[i + 1]) {

		} else {

			midpoint2 = i;
			break;
		}
	}
	if (sorted) {
		cout << 0 << endl;
	}
	else {
		if (midpoint == midpoint2) {
			if (a[n - 1] > a[0]) {
				cout << -1 << endl;
			} else {
				cout << count << endl;
			}
		}
		else {
			cout << -1 << endl;
		}
	}
	return 0;
}