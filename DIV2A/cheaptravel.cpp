#include<bits/stdc++.h>
using namespace std;



int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	long int n, m, a, b;
	cin >> n >> m >> a >> b;

	if (m * a <= b) {
		cout << n*a << endl;
	} else {
		cout << ((n / m)*b) + min((n % m)*a, b) << endl;
	}



	return 0;

}




















 