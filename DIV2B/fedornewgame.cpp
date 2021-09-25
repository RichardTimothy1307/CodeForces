#include<bits/stdc++.h>
using namespace std;



int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m, k;
	cin >> n >> m >> k;
	int a[m + 1];
	for (int i = 0; i < m + 1; i++) {
		cin >> a[i];
	}
	int b[m + 1];
	int z = 0;
	vector<vector<int>>v;

	for (int i = 0; i < m + 1; i++) {
		vector<int> v1(1000);
		int count = 1;
		int temp = a[i];
		/*cout << temp << endl;*/

		while (temp > 0) {
			if (temp & 1 > 0) {
				v1[count - 1] = 1;
			}
			count++;
			temp = temp >> 1;
		}
		/*b[z] = count;
		cout << b[z] << endl;
		z++;
		*/
		v.push_back(v1);
	}
	/*int friends = 0;
	for (int i = 0; i < m; i++) {
		cout << b[m] - b[i] << endl;
		if ((abs(b[m] - b[i]) <= k)) {

			friends++;
		}
	}
	cout << friends << endl;*/
	int ans = 0;
	for (int i = 0; i < m ; i++) {
		int diff = 0;
		for (int j = 0; j < 32; j++) {
			if (v[m][j] != v[i][j]) {
				diff++;
			}
			/*cout << v[i][j];*/

		}
		/*cout << diff << endl;*/
		if (diff <= k) {
			ans++;
		}
		/*cout << endl;*/
	}

	cout << ans << endl;


	return 0;
}