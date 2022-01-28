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
	int b[n];
	for (auto &it : a)cin >> it;
	for (auto &it : b)cin >> it;

	int maxi = -1;
	for (int i = 0; i < n; i++) {
		maxi = max(maxi, a[i]);
	}
	for (int i = 0; i < n; i++) {
		maxi = max(maxi, b[i]);
	}


	for (int i = 0; i < n; i++) {


		if (a[i] != maxi) {


			if (b[i] > a[i]) {
				int temp = b[i];
				b[i] = a[i];
				a[i] = temp;
			}


		}

	}

	maxi = -1;
	int maxi1 = -1;
	for (int i = 0; i < n; i++) {
		maxi = max(maxi, a[i]);
	}
	for (int i = 0; i < n; i++) {
		maxi1 = max(maxi1, b[i]);
	}

	cout << maxi*maxi1 << endl;

}



int32_t main() {
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