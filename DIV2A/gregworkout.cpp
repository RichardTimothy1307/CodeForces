#include<bits/stdc++.h>
using namespace std;



//Max adjacent difference
int maxadjacent(int j, int a[], int n) {
	int max = -1;
	for (int i = 0; i < n - 1; i++) {
		if (i + 1 == j) {
			if ((a[i + 2] - a[i]) > max) {
				max = a[i + 2] - a[i];
			}
		} else if (i == j) {
			if (a[i + 1] - a[i - 1] > max) {
				max = a[i + 1] - a[i - 1];
			}
		}
		else {
			if ((a[i + 1] - a[i]) > max) {
				max = a[i + 1] - a[i];
			}
		}
	}

	return max;
}

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

	int chest = 0, biceps = 0, back = 0;

	for (int i = 0; i < n; i += 3) {
		chest += a[i];
	}
	for (int i = 1; i < n; i += 3) {
		biceps += a[i];
	}
	for (int i = 2; i < n; i += 3) {
		back += a[i];
	}

	if (chest > biceps && chest > back) {
		cout << "chest" << endl;
	} if (biceps > chest && biceps > back) {
		cout << "biceps" << endl;
	} if (back > biceps && back > chest) {
		cout << "back" << endl;
	}

	return 0;
}