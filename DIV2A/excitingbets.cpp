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

		long long a, b;
		cin >> a >> b;

		if (a == b) {
			cout << 0 << " " << 0 << endl;
		}
		else {
			long long g = abs(a - b);
			cout << g << " " << min(a % g, g - (a % g)) << endl;
		}









	}

	return 0;
}