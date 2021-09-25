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
	set<int> s;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		s.insert(a[i]);
	}
	if (s.size() == 1) {
		if (s.count(0) == 1) {
			cout << n << endl;
		}
		else if (n == 1) {
			cout << 1 << endl;
		} else {
			cout << 2 << endl;
		}
	}
	else if (n == 1) {
		cout << 1 << endl;
	}
	else if (n == 2) {
		cout << 2 << endl;
	}
	else {
		int i = 2;
		int maxi = 2;
		int jump = 1;
		for (int i = 2; i < n; i += jump) {

			int length = 2;
			if (a[i] == a[i - 1] + a[i - 2]) {
				int k = i;
				while (a[k] == a[k - 1] + a[k - 2]) {
					length++;
					k++;
				}

				jump = (k + 1) - i ;
				maxi = max(maxi, length);

			} else {
				jump = 1;
			}
		}
		cout << maxi << endl;
	}


	return 0;
}