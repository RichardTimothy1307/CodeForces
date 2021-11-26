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

	int k, x;
	cin >> k >> x;

	int total = k * (k + 1) / 2 + k * (k - 1) / 2;

	if (x >= total) {
		cout << 2 * k - 1 << endl;
		return;
	}

	else if (x <= (k * (k + 1) / 2)) {   //* if x lies from 1 to k in between

		int l = 0;
		int r = k;

		while (l + 1 < r) {
			int mid = (l + r) / 2;
			if (x <= (mid * (mid + 1) / 2)) {
				r = mid;
			}
			else {
				l = mid;
			}

		}
		int ans = r;

		cout << ans << endl;
		return;

	}
	else {
		//TODO:if x lies from k-1 to 1  here we will subtract the rem values 1 2 3 4 3 2 1
		//TODO:say our x is between 4 to 1 here we have to add k*(k+1)/2 + (k)(k-1)/2-(k-j-1)(k-j)/2
		//TODO:find the optimal mid

		int l = 0;
		int r = k - 1;

		while (l + 1 < r) {
			int mid = (l + r) / 2;
			int temp = k - mid; //!mid==j
			int val = total - (temp * (temp - 1) / 2);
			if (x <= val) {
				r = mid;
			}
			else {
				l = mid;
			}
		}

		int ans = k + r; //because we took that first k's

		cout << ans << endl;
		return;

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