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

	int n, l;
	cin >> n >> l;
	double a[n];
	//because we have to divide by 2;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	double ans1 = a[0] - 0; //the distance between 0 and the first lamp because whole distance we need to cover
	double ans2 = l - a[n - 1]; //from the last lamp to end point
	int maxi = 0;
	for (int i = 0; i < n; i++) {
		int d = a[i + 1] - a[i];
		maxi = max(maxi, d);
	}
	double d = (double)maxi / 2.00;
	d = max(d, ans1);
	d = max(d, ans2);
	cout.precision(9); cout << fixed; cout << d << endl;

	return 0;
}