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
		string s;
		cin >> s;
		if (s.size() > 10) {
			int s1 = s.size() - 2;
			cout << s[0] << s1 << s[s.size() - 1] << endl;
		} else {
			cout << s << endl;
		}
	}

	return 0;

}




















 