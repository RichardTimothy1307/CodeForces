#include<bits/stdc++.h>
using namespace std;



int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		map<char, int> m;
		int n;
		cin >> n;
		string s;
		cin >> s;
		for (int i = 0; i < n; i++) {
			m[s[i]]++;
		}
		int count_a = m['a'];
		int count_b = m['b'];
		int l = 0;
		int r = n - 1;

		if (count_a == count_b) {
			cout << l + 1 << " " << r + 1 << endl;
		}
		else {
			while ((count_a != count_b) && l < n - 1 && r >= 1 && l != r) {
				if (count_a > count_b) {
					if (s[l] == 'a') {
						count_a--;
						l++;
					} else if (s[r] == 'a') {
						count_a--;
						r--;
					} else {
						count_b--;
						r--;
					}
				}
				else if (count_a < count_b) {
					if (s[l] == 'b') {
						count_b--;
						l++;
					} else if (s[r] == 'b') {
						count_b--;
						r--;
					} else {
						count_a--;
						l++;
					}
				}

			}
			if (count_a == count_b) {
				cout << l + 1 << " " << r + 1 << endl;
			} else {
				cout << -1 << " " << -1 << endl;
			}
		}
	}

	return 0;
}