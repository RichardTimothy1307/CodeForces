#include<bits/stdc++.h>
using namespace std;


/*const long long N = 10000005;

vector<long long> primes;

long long int p[N] = {0};

void sieve() {
	for (long long i = 2; i < N; i++) {
		if (p[i] == 0) { //it is prime
			//mark all multiples of i as not prime
			primes.push_back(i);
			for (long long int j = i; j < N; j += i) {
				p[j] = 1; //not prime
			}
		}
	}
}*/

int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	/*sieve();*/
	int t;
	cin >> t;
	while (t--) {
		long long no;
		cin >> no;
		if (no & (no - 1)) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}