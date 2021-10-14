#include<bits/stdc++.h>
using namespace std;
#define int long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair
int mod = 1e9 + 7;

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}

void solve() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		set<int> s;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			s.insert(a[i]);
		}
		if (s.size() == 1) {
			//!for the test case 1 1 1 1 here all numbers are equal so you can take infinity also 
			cout << -1 << endl;

		}
		else {
			sort(a, a + n);
			vector<int> v;
			for (int i = 1; i < n; i++) {
				v.push_back((a[i] - a[0]));

			}
			/*for (auto it : v) {
				cout << it << " ";
			}
			cout << endl;*/
			int overallgcd = 0;
			for (int i = 0; i < v.size() - 1; i++) {
				int current = gcd(v[i], v[i + 1]);
				overallgcd = gcd(current, overallgcd);
			}
			cout << overallgcd << endl;
		}

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
