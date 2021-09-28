#include<bits/stdc++.h>
using namespace std;
#define ll long long



int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll int t;
	cin >> t;
	while (t--) {
		ll int n, s;
		cin >> n >> s;
		if (n == 1) {
			cout << s << endl;
		} else {
			ll int med_rem = (n / 2) + 1;
			ll int after_med_sum = (s / med_rem);
			if (after_med_sum > 0 || s == 0) {
				cout << after_med_sum << endl;
			}
			else {
				cout << 0 << endl;
			}
		}
	}




	return 0;
}