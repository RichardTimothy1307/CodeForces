#include<bits/stdc++.h>
using namespace std;

const int n = 10000000;
bitset<10000005> b;

vector<int> primes;

void sieve() {
	//set all bits
	b.set(); //1,1,1,1
	b[0] = b[1] = 0;
	for (long long i = 2; i <= n; i++) {
		if (b[i]) {  //go thru all numbers then mark all its multiples 0
			primes.push_back(i);
			for (long long j = i * i; j <= n; j += i) {
				b[j] = 0;
			}
		}
	}


}

bool almost_prime(int i) {
	int count = 0;
	for (int j = 0; primes[j] <= i; j++) {
		if (i % primes[j] == 0) {
			count++;
		} else {
			//
		}
	}
	if (count == 2) {
		return true;
	}
	return false;
}







int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	sieve();
	int n;
	cin >> n;
	int totaldistinct = 0;
	for (int i = 1; i <= n; i++) {
		if (almost_prime(i)) {
			totaldistinct++;
		} else {
			//
		}
	}
	cout << totaldistinct << endl;

	return 0;
}