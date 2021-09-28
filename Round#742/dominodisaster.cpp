#include<bits/stdc++.h>
using namespace std;

//fast exponentiation

/*int pow(int a, int n) {
	if (n == 0) {
		return 1;
	}
	//check if n is odd
	int subprob = pow(a, n / 2);
	if (n & 1) {
		return a * subprob * subprob;
	}
	return subprob * subprob;
}*/


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
		int n;
		cin >> n;
		string s;
		cin >> s;
		string final;
		for (int i = 0; i < n; i++) {
			if (s[i] == 'L') {
				final += 'L';
			} else if (s[i] == 'R') {
				final += 'R';
			} else if (s[i] == 'U') {
				final += 'D';
			} else if (s[i] == 'D') {
				final += 'U';
			}
		}


		cout << final << endl;

	}
	return 0;
}