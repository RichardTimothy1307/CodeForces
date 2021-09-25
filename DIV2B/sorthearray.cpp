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
	int a1[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		a1[i] = a[i];
	}
	sort(a1, a1 + n);
	bool equals1 = true;
	for (int k = 0; k < n; k++) {
		if (a[k] != a1[k]) {
			equals1 = false;
			break;
		}
	}

	if (equals1) {
		cout << "yes" << endl;
		cout << 1 << " " << 1 << endl;
	}
	else {

		int start = 0;
		int end = n - 1;
		bool inv = false;
		//First index for inversion
		for (int i = 0; i < n - 1; i++) {
			if (a[i] > a[i + 1]) {
				start = i;
				break;
			}
		}
		for (int i = start + 1; i < n; i++) {
			if (a[start] < a[i]) {
				end = i - 1;
				break;
			}
		}

		//reversing the segment

		int revstart = start;
		int revend = end;
		int temp;

		while (revstart < revend) {
			temp = a[revstart];
			a[revstart] = a[revend];
			a[revend] = temp;
			revstart++;
			revend--;
		}
		bool equals = true;
		for (int k = 0; k < n; k++) {
			if (a[k] != a1[k]) {
				equals = false;
				break;
			}
		}
		if (equals) {
			cout << "yes" << endl;
			cout << start + 1 << " " << end + 1 << endl;
		} else {
			cout << "no" << endl;
		}

	}
	return 0;
}