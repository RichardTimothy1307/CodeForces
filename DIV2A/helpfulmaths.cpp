#include<bits/stdc++.h>
using namespace std;


int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;
	vector<int> v;
	for (int i = 0; i < s.size(); i++) {
		if (i % 2 == 0) {
			int x = (int)s[i] - 48;
			v.push_back(x);
		} else {
			//
		}
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		cout << v[i];
		if (i == v.size() - 1) {
			break;
		}
		cout << "+";
	}

	return 0;

}




















 