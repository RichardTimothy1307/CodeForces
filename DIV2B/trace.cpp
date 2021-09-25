#include<bits/stdc++.h>
using namespace std;
#define ll long long
double pi = 3.1415926536;

int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	if (n == 1) {
		cout.precision(10); cout << fixed;
		cout << pi*((double)a[0]*a[0]) << endl;
	}
	else {
		double area = 0;
		sort(a, a + n, greater<int>());
		for (int i = 0; i < n; i++) {
			if (i % 2 == 0) {
				area = area + (pi * (double)a[i] * a[i]);
			} else {
				area = area - (pi * (double)a[i] * a[i]);
			}
		}
		cout.precision(10); cout << fixed;
		cout << area << endl;
	}

	return 0;
}