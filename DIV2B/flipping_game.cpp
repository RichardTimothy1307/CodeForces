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
	int total_ones = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		total_ones += a[i];
		if (a[i] == 0) {
			a[i] = 1;
		}
		else {
			a[i] = -1;
		}
	}
	//cout << total_ones << endl;

	int curr_max = 0;
	int max_till_here = INT_MIN;
	for (int i = 0; i < n; i++) {

		if (curr_max + a[i] >= a[i]) {
			curr_max = curr_max + a[i];
			//cout << curr_max << endl;


		}
		else {
			curr_max = a[i];
			//cout << curr_max << endl;
			//	cout << a[i] << endl;


		}

		if (max_till_here < curr_max) {
			max_till_here = curr_max;

		}


	}


	cout << max_till_here + total_ones << endl;

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
