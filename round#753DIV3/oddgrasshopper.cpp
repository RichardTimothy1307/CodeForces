#include<bits/stdc++.h>
using namespace std;
#define ll long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair
const int mod = 1e7;
//vector<int> graph[(int)1000];  //defining array of vectors

void solve() {
	ll int x, n;
	cin >> x >> n;
	if (n == 0) {
		cout << x << endl;
		return;
	}
	ll int cycles = n - 1;
	ll int rep_cycles = cycles / 4;
	ll int rem_cycles = cycles % 4;
	ll int ans = x;
	if (x % 2 == 0) {
		//even
		ans -= 1;
		ans -= rep_cycles * 4;
		if (rem_cycles == 1) {
			ans += n;
		}
		else if (rem_cycles == 2) {
			ans += (n + n - 1);
		}
		else if (rem_cycles == 3) {
			ans += (n - 2 + n - 1 - n);
		}
	}
	else {
		ans += 1;
		ans += rep_cycles * 4;
		if (rem_cycles == 1) {
			ans -= n;
		}
		else if (rem_cycles == 2) {
			ans -= (n + n - 1);
		}
		else if (rem_cycles == 3) {
			ans -= (n - 2 + n - 1 - n);
		}
	}
	cout << ans << endl;

}

int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;


}
