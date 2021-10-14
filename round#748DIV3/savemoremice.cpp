#include<bits/stdc++.h>
using namespace std;
#define int long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair
int mod = 1e9 + 7;


void solve() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int a[k];
		set<int> s1;
		for (int i = 0; i < k; i++) {
			cin >> a[i];
			//s1.insert(a[i]);
		}

		sort(a, a + k);
		int count_eaten = 0, count_holed = 0;
		int j = k - 1;
		int cat = 0;
		for (int i = k - 1; i >= 0; i--) {

			//cout << a[i] << endl;

			//cout << a[i] << " " << cat << endl;
			if (cat >= a[i]) {
				break;
			}

			cat += (n - a[i]);
			++count_holed;

		}
		cout << count_holed << endl;

	}


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
