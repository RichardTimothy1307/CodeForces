#include<bits/stdc++.h>
using namespace std;
#define int long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair
//vector<int> graph[(int)1000];  //defining array of vectors


void solve() {
	int n, m;
	cin >> n >> m;
	int a[m];
	int val = 0;
	if (m % 2 != 0) {     //!0 1 -1 2 -2 (for m=5) odd 
		for (int i = 0; i < m; i++) {
			if (i % 2 == 0) {
				a[i] = -val;
				val++;
			} else {
				a[i] = val;
			}
		}
	}
	else {
        //!0 -1 1 -2 2 -3 (for m=6) even
		for (int i = 0; i < m; i++) {
			if (i % 2 != 0) {
				val++;
				a[i] = -val;

			} else {
				a[i] = val;
			}
		}

	}

	for (int i = 0; i < n; i++) {
		cout << ((m + 1) / 2) - a[i % m] << endl;   //!the formula given in the question
	}

}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;


}
