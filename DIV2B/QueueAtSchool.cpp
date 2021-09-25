#include<bits/stdc++.h>
using namespace std;



int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, t;
	cin >> n >> t;
	string s;
	cin >> s;
	while (t--) {
		for (int i = 0; i < s.size() - 1; i += 1) {
			if (s[i] == 'B') {
				if (s[i + 1] == 'G') {
					s[i] = 'G';
					s[i + 1] = 'B';
					i++;
				} else {
					//
				}

			} else {
				//
			}
		}
	}
	cout << s << endl;


	return 0;
}