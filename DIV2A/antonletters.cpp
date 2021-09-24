#include<bits/stdc++.h>
using namespace std;



int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	map<char, int> m;
	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 97 && s[i] <= 122) {
			m[s[i]]++;
		}
	}
	cout << m.size() << endl;


	return 0;

}




















 