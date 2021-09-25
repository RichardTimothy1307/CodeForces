#include<bits/stdc++.h>
using namespace std;
#define ll long long



int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n = 3;
	int m = 3;
	int a[n][m];
	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			sum += a[i][j];
		}
	}
	sum = sum / 2;
	a[0][0] = sum - a[0][1] - a[0][2];
	a[1][1] = sum - a[1][0] - a[1][2];
	a[2][2] = sum - a[2][0] - a[2][1];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}