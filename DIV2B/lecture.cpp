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

	int n, m1;
	cin >> n >> m1;
	map<string, string>m;
	for (int i = 0; i < m1; i++) {
		string x, y;
		cin >> x >> y;
		m[x] = y;
	}
	for (int j = 0; j < n; j++) {
		string s;
		cin >> s;
		if (s.size() > m[s].size()) {
			cout << m[s] << " ";
		} else if (s.size() == m[s].size()) {
			cout << s << " ";
		} else {
			cout << s << " ";
		}
	}




	return 0;
}