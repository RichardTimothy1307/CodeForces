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
	int a[n];
	int b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
		if (i > 0) {
			a[i] = a[i] + a[i - 1];
		}
		//cout << a[i] << endl;
	}
	sort(b, b + n);
	for (int i = 0; i < n; i++) {
		if (i > 0) {
			b[i] = b[i] + b[i - 1];
			//cout << b[i] << " ";
		}
	}
	//cout << endl;
	//cout << a[6] << endl;
	int m;
	cin >> m;
	while (m--) {
		int type, l, r;
		int sum = 0;
		cin >> type >> l >> r;
		if (type == 1) {
			if (l == 1) {
				cout << a[r - 1] << endl;
			}
			else {
				cout << a[r - 1] - a[l - 1 - 1] << endl;
			}

		}
		else {
			if (l == 1) {
				cout << b[r - 1] << endl;
			}
			else {
				cout << b[r - 1] - b[l - 1 - 1] << endl;
			}


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
	//cin >> t;
	while (t--) {
		solve();
	}

	return 0;


}
