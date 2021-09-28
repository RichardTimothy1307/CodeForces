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

	int n, m1;
	cin >> n >> m1;
	map<int, int> m;
	for (int i = 1; i <= n; i++) {
		m[i] = 0;
	}
	while (m1--) {
		int a, b, c;
		cin >> a >> b >> c;
		if (m[a] == 0 and m[b] == 0 and m[c] == 0) {
			m[a] = 1; m[b] = 2; m[c] = 3;
		}
		else if (m[a] != 0) {
			if (m[a] == 1) {
				m[b] = 3;
				m[c] = 2;
			}
			if (m[a] == 2) {
				m[b] = 3;
				m[c] = 1;
			}
			if (m[a] == 3) {
				m[b] = 2;
				m[c] = 1;
			}

		} else if (m[b] != 0) {
			if (m[b] == 1) {
				m[a] = 3;
				m[c] = 2;
			}
			if (m[b] == 2) {
				m[a] = 3;
				m[c] = 1;
			}
			if (m[b] == 3) {
				m[a] = 2;
				m[c] = 1;
			}

		} else if (m[c] != 0) {
			if (m[c] == 1) {
				m[a] = 3;
				m[b] = 2;
			}
			if (m[c] == 2) {
				m[a] = 1;
				m[b] = 3;
			}
			if (m[c] == 3) {
				m[a] = 1;
				m[b] = 2;
			}
		} else {
			//
		}
	}
	for (auto it : m) {
		cout << it.second << " ";
	}




	return 0;

}
