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
	long int n;
	cin >> n;
	vector<long long int> a1, a2;
	long long  int sum1 = 0, sum2 = 0;
	bool last;
	for (long long int i = 0; i < n; i++) {
		long long int x;
		cin >> x;
		if (x > 0) {
			a1.push_back(x);
			sum1 += x;
			last = true;
		} else {
			last = false;
			x *= -1;
			a2.push_back(x);
			sum2 += x;

		}
	}
	if (sum1 > sum2) {
		cout << "first" << endl;
	}
	else if (sum2 > sum1) {
		cout << "second" << endl;
	} else {
		if (a1 > a2) {
			cout << "first" << endl;
		} else if (a2 > a1) {
			cout << "second" << endl;
		} else {
			if (last) {
				cout << "first" << endl;
			} else {
				cout << "second" << endl;
			}
		}
	}




	return 0;
}