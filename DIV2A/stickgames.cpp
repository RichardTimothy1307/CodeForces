#include<bits/stdc++.h>
using namespace std;



int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	string winner = "Akshat";

	while (n != 0 && m != 0) {
		n--;
		m--;
		winner = "Akshat";
		if (n == 0 || m == 0) {
			//
		} else {
			n--;
			m--;
			winner = "Malvika";
		}
	}

	cout << winner;
	return 0;

}




















 