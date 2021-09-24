#include<bits/stdc++.h>
using namespace std;


long long gcd(long long a , long long b) {
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
	long long l, r;
	cin >> l >> r;
	long long a, b, c;
	bool present = false;
	vector<long long> v;

	if ((((r - l) == 1)) or ((r - l) == 0)) {
		present = false;
	}

	else {
		for (long long i = l; i <= r; i++) {
			v.push_back(i);
		}

		for (long long i = 0; i < v.size() - 2; i++) {
			long long pair1 = gcd(v[i], v[i + 1]);
			long long pair2 = gcd(v[i + 1], v[i + 2]);
			long long pair3 = gcd(v[i], v[i + 2]);
			if ((pair1 == 1) && (pair2 == 1) && (pair3 != 1)) {
				a = v[i]; b = v[i + 1]; c = v[i + 2];
				present = true;
				break;
			}
		}

	}
	if (present) {
		cout << a << " " << b << " " << c << endl;
	} else {
		cout << -1 << endl;
	}

	return 0;
}