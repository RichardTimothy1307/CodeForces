#include<bits/stdc++.h>
using namespace std;




int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	if (n % 2 != 0) {
		cout << -1 << endl;
	} else {
		int a[n];
		int temp;
		for (int i = 0; i < n; i++) {
			a[i] = i + 1;
		}
		for (int i = 0; i < n - 1; i += 2) {
			int temp = a[i + 1];
			a[i + 1] = a[i];
			a[i] = temp;

		}

		for (int i = 0; i < n; i++) {
			cout << a[i] << endl;
		}
	}

	return 0;
}