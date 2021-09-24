#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		long long int n, x;
		cin >> n >> x;
		long long int a[n];
		long double sum = 0;
		long long int max = 0, min = 0;
		for (long long int i = 0; i < n; i++) {
			cin >> a[i];
			long double z = a[i];
			sum += z;
			long double m = a[i];
			long double n = x;
			long double div = m / n;
			max += ceil(div);
		}
		min = ceil(sum / x);
		cout << min << " " << max << endl;








	}

	return 0;
}