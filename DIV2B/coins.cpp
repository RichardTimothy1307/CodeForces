#include<bits/stdc++.h>
using namespace std;
#define ll long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair
//long long mod = 1e6 + 3;

int all[1000001];


int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	for (int i = 0; i < 1000001; i++) {
		all[i] = i + 1;
	}
	int n;
	cin >> n;
	vector<int> final;
	int k = n;
	int primes;
	for (int i = 2; i <= n; i++) {
		if (n % i == 0) {
			primes = i;
			break;
		}
	}
	if (n == 1) {
		cout << 1 << endl;
	}
	else if (n == primes) {
		cout << n << " " << 1 << endl;
	}
	else {
		vector<int> v;
		v.PB(n);

		for (int i = 1; all[i]*all[i] <= n; i++) {

			while (n % all[i] == 0) {
				n = n / all[i];
				v.push_back(n);
			}


		}
		if (n > 1) {

			v.push_back(1);
			n = 1;
		}
		if (final.size() < v.size()) {
			final = v;
		}

	}
	for (auto it : final) {
		cout << it << " ";
	}


	return 0;

}
