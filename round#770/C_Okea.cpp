#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,avx,avx2")

#include<bits/stdc++.h>
using namespace std;
#define int long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair
const int mod = 1e9 + 7;
//vector<int> graph[(int)1000];  //defining array of vectors
//to_ullong()

void solve() {


	int n, k;
	cin >> n >> k;

	int n_k = n * k;

	if (n == 1 and k == 1) {
		cout << "YES" << endl;
		cout << 1 << endl;
		return;
	}
	if (k == 1) {
		cout << "YES" << endl;
		int start = 1;
		for (int i = 0; i < n_k; i++) {
			cout << start << endl;
			start++;
		}
		return;
	}

	if (n_k % 2 == 0) {
		int evens = n_k / 2;
		int odds = n_k / 2;

		if (evens % k == 0 and odds % k == 0) {

			cout << "YES" << endl;
			int start = 1;
			for (int i = 0; i < n / 2; i++) {
				for (int j = 0; j < k; j++) {
					cout << start << " ";
					start += 2;
				}
				cout << endl;
				if (start + 1 == n_k) {
					break;
				}
			}
			start = 2;
			for (int i = 0; i < n / 2; i++) {
				if (start == n_k) {
					break;
				}
				for (int j = 0; j < k; j++) {
					cout << start << " ";
					start += 2;
				}
				cout << endl;
			}


		}
		else {
			cout << "NO" << endl;
		}
	}
	else {

		cout << "NO" << endl;

	}
}


int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;


}