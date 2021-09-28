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

	int t;
	cin >> t;
	while (t--) {
		int n; cin >> n;
		int m;
		cin >> m;
		int a[m];
		for (int i = 0; i < m; i++) {
			cin >> a[i];
		}
		int inconvi = 0;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < i; j++) {
				if (a[i] > a[j]) {
					inconvi++;
				}
			}

		}
		cout << inconvi << endl;
	}
	return 0;
}