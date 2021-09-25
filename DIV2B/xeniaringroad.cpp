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

	ll int n, m;
	cin >> n >> m;
	ll int a[m];
	for (ll int i = 0; i < m; i++) {
		cin >> a[i];
	}
	ll int ans = (a[0] - 1);
	for (ll int i = 0; i < m - 1; i++) {
		if (a[i] > a[i + 1]) {
			ans += (n - a[i]) + (a[i + 1] - 1) + 1;
		} else if (a[i + 1] >= a[i]) {
			ans += (a[i + 1] - a[i]);
		}
	}
	cout << ans << endl;

	return 0;
}