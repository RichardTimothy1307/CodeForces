#include<bits/stdc++.h>
using namespace std;



int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	vector<int> x;
	vector<int> y;
	vector<int> z;
	for (int i = 0; i < n; i++) {
		int x_val, y_val, z_val;
		cin >> x_val >> y_val >> z_val;
		x.push_back(x_val); y.push_back(y_val); z.push_back(z_val);
	}

	int x_pos = 0, x_neg = 0, y_pos = 0, y_neg = 0, z_pos = 0, z_neg = 0;
	for (int i = 0; i < n; i++) {
		if (x[i] >= 0) {
			x_pos += x[i];
		}
		if (x[i] < 0) {
			x_neg += x[i];
		} if (y[i] >= 0) {
			y_pos += y[i];
		}
		if (y[i] < 0) {
			y_neg += y[i];
		} if (z[i] >= 0) {
			z_pos += z[i];
		}
		if (z[i] < 0) {
			z_neg += z[i];
		}
	}

	/*cout << x_pos << x_neg << y_pos << y_neg << z_pos << z_neg << endl;*/

	if ((x_pos + x_neg) == 0 && (y_pos + y_neg) == 0 && (z_pos + z_neg) == 0 ) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}



	return 0;

}




















 