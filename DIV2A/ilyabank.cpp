#include<bits/stdc++.h>
using namespace std;



int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long n;
	cin >> n;
	if (n >= 0) {
		cout << n << endl;
	} else {
		long long last = abs(n) % 10; long long main_last = abs(n) / 10;
		long long second_last = abs(main_last) % 10; long long main_second_last = main_last / 10;
		if (last <= second_last) {
			n = main_second_last * 10 + last;
			cout << -n << endl;
		} else {
			n = main_second_last * 10 + second_last;
			cout << -n << endl;
		}

	}


	return 0;

}




















 