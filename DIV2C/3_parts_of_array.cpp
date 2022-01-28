#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,avx,avx2")

#include<bits/stdc++.h>
using namespace std;
#define int long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair
const int mod = 1e9 + 7;
//vector<int> graph[(int)1000];  //defining array of vectors



void solve() {



	int n;
	cin >> n;

	int a[n];

	for (auto &it : a)cin >> it;


	int l = 0;
	int r = n - 1;
	int sum1 = a[l];
	int sum2 = a[r];
	int j = -1;
	int k = -1;
	int ans = 0;
	while (l < r) {
		if (sum1 == sum2) {
			j = l, k = r;
			ans = sum1;
			l++;
			sum1 += a[l];
			r--;
			sum2 += a[r];
		}
		else if (sum1 > sum2) {
			r--;
			sum2 += a[r];
		}
		else if (sum1 < sum2) {
			l++;
			sum1 += a[l];
		}

		else {
			//
		}

	}

	cout << ans << endl;



}



int32_t main() {
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