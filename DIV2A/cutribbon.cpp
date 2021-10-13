#include<bits/stdc++.h>
using namespace std;
#define int long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair
int mod = 1e9 + 7;


void solve() {
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	//*xa+yb+zc=n  here we have to maximize x+y+z we can find z by n-(xa+yb) since x and y will be multiple of a and b so no problem
	int ans = 0;
	for (int x = 0; x <= 4000; x++) {
		for (int y = 0; y <= 4000; y++) {
			int zc = n - (x * a + y * b);
			if (zc < 0) {
				break;
			}
			double z = zc / (double)c;
			if (z == (int)z) {
				//cout << x << " " << y << " " << z << endl;
				ans = max(ans, (int)(x + y + z));
			}
		}
	}
	cout << ans << endl;


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
