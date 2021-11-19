#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,avx,avx2")

#include<bits/stdc++.h>
using namespace std;
#define int long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair
const int mod = 1e7;
//vector<int> graph[(int)1000];  //defining array of vectors


void solve() {

	//k places fill with 1 if odd otherwise 2 if even  1 1 1 1+(n-k) or 2 2 2 2+(n-k)

	int n, k;
	cin >> n >> k;

	bool possible_odd = false;
	bool possible_even = false;

	//odds

	if ((1 + (n - k)) % 2 != 0 and (1 + (n - k)) > 0) {
		possible_odd = true;
	}

	if ((2 + (n - 2 * k)) % 2 == 0 and ((2 + (n - 2 * k))) > 0) {
		possible_even = true;
	}

	if (possible_odd == true) {
		cout << "YES" << endl;
		for (int i = 0; i < k - 1; i++) {
			cout << 1 << " ";
		}
		cout << 1 + (n - k) << endl;
		return;
	}

	if (possible_even == true) {
		cout << "YES" << endl;
		for (int i = 0; i < k - 1; i++) {
			cout << 2 << " ";
		}
		cout << 2 + (n - 2 * k) << endl;
		return;
	}

	cout << "NO" << endl;


}
signed main() {
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
