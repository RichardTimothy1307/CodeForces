#include<bits/stdc++.h>
using namespace std;



int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long n, k;
	cin >> n >> k;

	if (k <= (n + 1) / 2) {
		cout << k * 2 - 1 << endl;
	} else {
		cout << (k - ((n + 1) / 2)) * 2 << endl;
	}



	return 0;

}




















 