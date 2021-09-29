#include<bits/stdc++.h>
using namespace std;
#define ll long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair
//long long mod = 1e6 + 3;




int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		map<char, int> m;
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); i++) {
			m[s[i]]++;
		}
		if (m['C'] == 0) {
			if (m['A'] == m['B']) {
				cout << "YES" << endl;
			} else {
				cout << "NO" << endl;
			}
		}
		else {
			int b1 = m['B'];
			int c1 = m['C'];
			b1 = m['B'] - m['A'];
			if (m['A'] < m['B'] and b1 == c1) {
				cout << "YES" << endl;
			} else {
				cout << "NO" << endl;
			}
		}
	}



	return 0;

}
