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
long int xor_value(int a) {
	if (a % 4 == 0) {
		return a;
	} else if (a % 4 == 1) {
		return 1;
	} else if (a % 4 == 2) {
		return a + 1;
	} else if (a % 4 == 3) {
		return 0;
	}
	return 0;
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
		long int a, b;
		cin >> a >> b;
		long int total_xor = xor_value(a - 1);
		if (total_xor == b) {
			cout << a << endl;
		} else if (total_xor != b) {
			if ((total_xor ^ b) == a) { // we will add total_xor and then b so that xor remains b
				cout << a + 2 << endl;
			} else if ((total_xor ^ b) != a) { //we only add one element
				cout << a + 1 << endl;
			}
		}
	}

	return 0;
}