#include<bits/stdc++.h>
using namespace std;



int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, d;
	cin >> n >> d;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int time = 0, jokes = 0;
	for (int i = 0; i < n; i++) {
		time  = time + (a[i] + 10);

		if (i == n - 1) {
			time = time - 10;
			/*jokes = jokes - 2;*/
		} else {
			jokes = jokes + 2;
		}
		/*cout << time << endl;*/
	}


	if (time > d) {
		jokes = -1;
	} else if (time < d) {
		int a = (d - time) / 5;
		jokes = jokes + a;
	} else {
		//
	}

	cout << jokes << endl;


	return 0;

}




















 