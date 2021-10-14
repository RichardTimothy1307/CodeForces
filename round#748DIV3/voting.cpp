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
		int a, b, c;
		cin >> a >> b >> c;
		//for a
		if (a > b and a > c) {
			cout << 0 << " ";
		} else {
			int max_botha = max(b, c);
			cout << max_botha - a + 1 << " ";
		}
		//for b
		if (b > a and b > c) {
			cout << 0 << " ";
		} else {
			int max_bothb = max(a, c);
			cout << max_bothb - b + 1 << " ";
		}

		//for c
		if (c > a and c > b) {
			cout << 0 << " ";
		}
		else {
			int max_bothc = max(b, a);
			cout << max_bothc - c + 1 << " ";
		}

		cout << endl;

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
