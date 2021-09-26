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

	int n, m, d;
	cin >> n >> m >> d;
	int a[n][m];
	int u = m * n;
	vector<int> z;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			z.push_back(a[i][j]);
		}
	}

	sort(z.begin(), z.end());
	int max_all = -1;
	int min_final = 100000005;
	bool possible = true;
	for (int k = 0; k < z.size(); k++) {
		int sum_all = 0;
		int l = z[k];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (abs(z[k] - a[i][j]) % d != 0) {
					possible = false; break;
				}
				//cout << z[k] << " " << a[i][j] << endl;
				sum_all = sum_all + ((abs(z[k] - a[i][j]) / d));
				//cout << (abs(z[k] - a[i][j]) / d) << endl;

			}
		}
		if (possible == false) {
			break;
		}
		min_final = min(min_final, sum_all);

	}

	if (possible == false) {
		cout << -1 << endl;
	}
	else {
		cout << min_final << endl;
	}


	return 0;

}
