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
		int n;
		char c;
		cin >> n >> c;
		string s;
		cin >> s;
		int x = 0;
		int count_c = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == c) {
				x = i + 1;
				count_c++;
			}

		}
		//!n%n-1 is always not equal to zero 
		if (count_c == n) {
			cout << 0 << endl;
		}
		else {
			if (x <= (n / 2)) {
				cout << 2 << endl;
				cout << n - 1 << " " << n << endl;
			} else {
				cout << 1 << endl;
				cout << x << endl;
			}
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
