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

	string s;
	cin >> s;
	int n = s.length();
	int evens = 0;
	if (n == 1) {
		int x = s[0] - '0';
		if (x % 2 == 0) {
			cout << 0 << endl;
			return;
		}
	}
	for (int i = 0; i < n; i++) {
		if ((s[i] - '0') % 2 == 0) {
			evens++;
		}
	}

	if (evens == 0) {
		cout << -1 << endl;
	}
	else {
		if ((s[n - 1] - '0') % 2 == 0) {
			cout << 0 << endl;
		}
		else if ((s[0] - '0') % 2 == 0) {
			cout << 1 << endl;
		}

		else {
			cout << 2 << endl;
		}
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