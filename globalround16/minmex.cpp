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
		string s;
		cin >> s;
		int count0 = 0;
		int count01 = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '1') {
				count0++;
			}
			else {
				count01++;
			}
		}
		if (count0 == s.size()) {
			cout << 0 << endl;
		} else if (count01 == 1) {
			cout << 1 << endl;
		}
		else {
			vector<pair<int, int>> v;
			int j, k;
			for (int i = 0; i < s.size(); i++) {
				if (s[i] == '0') {
					k = i;
					while (s[i] == '0' && s[i] != '1' && i < s.size()) {
						i++;
					}
					j = i;
				}
				else {
					continue;
				}
				v.push_back(make_pair(k, j));

			}
			if (v.size() * 1 < 2) {
				cout << v.size() * 1 << endl;
			} else {
				cout << 2 << endl;
			}
		}

	}




	return 0;
}