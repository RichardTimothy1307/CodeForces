#include<bits/stdc++.h>
using namespace std;
#define ll long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair




void solve() {
	int d;
	cin >> d;
	int n;
	cin >> n;
	int manual_increase = 0;
	int first = 0;
	while (n--) {
		if (first > 0) {
			int a;
			cin >> a;
			if (a < d) {
				manual_increase += (d - a);
			}
		}
		first++;

	}
	cout << manual_increase << endl;

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
