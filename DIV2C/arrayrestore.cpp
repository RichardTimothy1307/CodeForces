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

	int n, x, y;
	cin >> n >> x >> y;
	vector<int> all_arr(n);
	vector<int> min_arr(n);
	min_arr[n - 1] = 1e9 + 5;

	//___ ___ ___ ____ ____   keep x and y at all valid positions and check



	if (n == 2) {
		cout << x << " " << y << endl;
		return;
	}

	for (int i = 0; i < n; i++) {

		for (int j = i + 1; j < n; j++) {


			all_arr[i] = x;
			all_arr[j] = y;

			int common_diff = (y - x);
			int d = j - i;

			if (common_diff % d == 0) {
				common_diff = common_diff / d;
				for (int k = i - 1; k >= 0; k--) {
					all_arr[k] = all_arr[k + 1] - common_diff;
				}

				for (int k = i + 1; k < n; k++) {
					all_arr[k] = all_arr[k - 1] + common_diff;
				}
				if (all_arr[0] > 0 and (all_arr[n - 1] < min_arr[n - 1])) {  //we will push the array with max min value
					min_arr = all_arr;
				}
			}



		}
	}


	for (auto &it : min_arr) {
		cout << it << " ";
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