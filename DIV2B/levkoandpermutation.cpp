#include<bits/stdc++.h>
using namespace std;
#define ll long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair




void solve() {
	int n, k;
	cin >> n >> k;
	int a[n + 1];
	for (int i = 1; i <= n; i++) {
		a[i] = i;
	}
	if (n == k) {
		cout << -1 << endl;
		return;
	}
	int oddswaps = n - k - 1;
	int i = 1;
	int j = i + 2;
	while (oddswaps-- and j <= n) {
		swap(a[i], a[j]);
		i += 2;
		j += 2;
		//oddswaps--;
	}
	if (k < n / 2) {  //because we are switching only odd places that is n/2 if k<n/2 we there answer will be n/2 always so we need to perform more swaps
		int remswaps = (n / 2) - k;
		//cout << remswaps << endl;
		int l = 1;
		int m = l + 1;
		while (remswaps--) {
			swap(a[l], a[m]);
			//cout << a[l] << " " << a[m] << endl;
			l += 2;
			m += 2;
		}

	}
	for (int i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();

	return 0;


}
