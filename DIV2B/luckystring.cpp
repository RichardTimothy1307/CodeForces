#include<bits/stdc++.h>
using namespace std;
#define ll long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair


void solve() {
	int n;
	cin >> n;
	string s = "";
	for (int i = 1; i <= n; i++) {
		if (i % 4 == 1) {
			s += 'a';
		}
		else if (i % 4 == 2) {
			s += 'b';
		}
		else if (i % 4 == 3) {
			s += 'c';
		} else if (i % 4 == 0) {
			s += 'd';
		} else {
			//
		}
	}
	cout << s << endl;


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
