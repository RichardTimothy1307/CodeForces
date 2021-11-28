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
	int n;
	cin >> n;

	vector<int> a(n);

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a.rbegin(), a.rend());

	int alice = 0, bob = 0;

	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			if (a[i] % 2 == 0) {
				alice += a[i];
			}
			else {
				//
			}
		}
		else {
			if (a[i] % 2 != 0) {
				bob += a[i];
			}
			else {
				//
			}
		}
	}

	if (alice > bob) {
		cout << "Alice" << endl;
	}
	else if (bob > alice) {
		cout << "Bob" << endl;
	}
	else {
		cout << "Tie" << endl;
	}

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