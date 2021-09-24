#include<bits/stdc++.h>
using namespace std;



int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m, x;
	cin >> n >> m;

	if (m > n) {
		cout << -1 << endl;
	} else {

		if (n % 2 == 0) {
			x = n / 2;
		}
		else {
			x = (n / 2) + 1;
		}
		while (x % m != 0) {
			x++;
		}

		cout << x << endl;


	}


	return 0;

}




















 