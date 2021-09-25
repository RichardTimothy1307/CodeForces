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
	int n, k;
	cin >> n >> k;
	int a[n];
	int max = -1;
	int min = 1000006;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (max < a[i]) {
			max = a[i];
		}
		if (min > a[i]) {
			min = a[i];
		}
	}
	if (max - min > k) {
		cout << "NO" << endl;
	}
	else {
		cout << "YES" << endl;
		for (int i = 0; i < n; i++) {
			int x = 1;
			for (int j = 0; j < a[i]; j++) {
				if (j + 1 <= min) {
					cout << 1 << " ";
				} else {
					cout << x << " ";
					x++;
				}
			}
			cout << endl;
		}
	}




	return 0;
}