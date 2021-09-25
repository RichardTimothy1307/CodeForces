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

	string s;
	cin >> s;
	long long int n = s.size();
	bool evenpresent = false;
	for (ll int i = 0; i < s.size(); i++) {
		if ((s[i] - '0') % 2 == 0) {
			evenpresent = true;
			break;
		}
	}
	if (evenpresent) {
		int swapped = 0;
		for (ll int i = 0; i < s.size() - 1; i++) {
			if ((s[i] - '0') % 2 == 0) {
				if ((s[i] - '0') < (s[n - 1] - '0')) {
					swap(s[i], s[n - 1]);
					swapped = 1;
					break;
				}
			}
		}
		if (swapped == 0) {
			for (ll int i = n - 2; i >= 0; i--) {
				if ((s[i] - '0') % 2 == 0) {
					swap(s[i], s[n - 1]);
					break;
				}
			}
		}
		cout << s << endl;
	} else {
		cout << -1 << endl;
	}

	return 0;
}