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
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int count = a[0] + 1;
	for (int i = 0; i < n - 1; i++) {
		count += abs(a[i] - a[i + 1]) + 1 + 1;
	}
	cout << count << endl;


	return 0;
}