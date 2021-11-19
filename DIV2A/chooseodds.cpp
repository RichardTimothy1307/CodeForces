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

	int n, x;
	cin >> n >> x;
	int a[n];
	int evens = 0, odds = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] % 2 == 0) {
			evens++;
		}
		else {
			odds++;
		}
	}

	if (odds == 0) {
		cout << "NO" << endl;
	}
	else if (odds >= x and evens == 0 and x % 2 == 0) {
		cout << "NO" << endl;
	}
	else if (odds >= x) {
		cout << "YES" << endl;
	}
	else if (odds % 2 == 0) {
		if (odds >= x) {

		}
		if (odds - 1 + evens >= x) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	else if (odds % 2 != 0 and odds + evens >= x) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
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
