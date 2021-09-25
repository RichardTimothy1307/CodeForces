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
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int j = 0; j < m; j++) {
		cin >> b[j];
	}
	int pos = m - 1;
	int ans = n; //because all the elements can be greater so we will need to add that
	for (int i = n - 1; i >= 0 and pos >= 0; i--) {
		if (a[i] <= b[pos]) {
			ans--;
			pos--;
		}
	}

	cout << ans << endl;


	return 0;
}