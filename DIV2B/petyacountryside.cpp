#include<bits/stdc++.h>
using namespace std;
#define ll long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair


void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int count;
	int max_count = -1;
	for (int i = 0; i < n; i++) {
		int u1 = a[i], u2 = a[i];
		int j = i - 1; int k = i + 1;
		count = 1;

		while (j >= 0 and u1 >= a[j] ) {
			u1 = a[j];
			u2 = a[k];
			count++;
			j--;

		}
		while (k<n and u2 >= a[k]) {
			u2 = a[k];
			count++;
			k++;
		}
		//cout << a[i] << count << endl;
		max_count = max(max_count, count);
	}
	cout << max_count << endl;

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
