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
	string a;
	cin >> a;

	int u = 0;
	int u1 = n - 1;

	if (n == 1) {
		cout << a << endl;
		return;
	}
	int inv = 0;
	for (int i = 0; i < n - 1; i++) {
		if (a[i] == '1' and a[i + 1] == '0') {
			inv++;
			break;
		}
	}
	if (inv == 0) {
		cout << a << endl;
		return;
	}

	while (a[u] != '1' and u < n) {
		cout << '0';
		u++;
	}
	cout << '0';

	while (a[u1] != '0' and u1 >= 0) {
		cout << '1';
		u1--;
	}

	cout << endl;




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
