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
		string s;
		cin >> s;
		//set<char> s1(begin(s), end(s));
		//cout << s1.count('2') << " " << s1.count('7') << endl;

		int ans = -1;
		int mini = INT_MAX;
		for (int i = s.size() - 1; i >= 0; i--) {
			if (s[i] == '0') {
				for (int j = i - 1; j >= 0; j--) {
					if (s[j] == '5' or s[j] == '0') {
						ans = ((s.size() - 1) - i) + (i - 1 - j);
						mini = min(ans, mini);

					}
				}
			}
			else if (s[i] == '5') {
				for (int j = i - 1; j >= 0; j--) {
					if (s[j] == '2' or s[j] == '7') {
						ans = ((s.size() - 1) - i) + (i - 1 - j);
						mini = min(ans, mini);
					}
				}

			}

		}
		cout << mini << endl;


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
