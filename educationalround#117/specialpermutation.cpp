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

	int n, a, b;
	cin >> n >> a >> b;
	int a1[n];
	int swap_1 = -1, swap_2 = -1;
	if (a < b) {
		for (int i = 0; i < n; i++) {
			a1[i] = n - i ;
			if (a1[i] == a) {
				swap_1 = i;
			}
			if (a1[i] == b) {
				swap_2 = i;
			}
		}
		//cout << swap_1 << " " << swap_2 << endl;
		if (swap_2 == -1 or swap_1 == -1) {
			cout << -1 << endl;
			return;
		}
		if (swap_1 >= n / 2 and swap_2 < n / 2) {
			swap(a1[swap_1], a1[swap_2]);
			for (auto &it : a1) {
				cout << it << " ";
			}
			cout << endl;
			return;
		}
		else {
			cout << -1 << endl;
			return;
		}

	}
	else {
		for (int i = 0; i < n; i++) {
			a1[i] = n - i;
			if (a1[i] == a) {
				swap_1 = i;
			}
			if (a1[i] == b) {
				swap_2 = i;
			}
		}
		if (swap_1 != n / 2 - 1 or swap_2 != n / 2) {
			cout << -1 << endl;
			return;
		}
		if (swap_2 == -1 or swap_1 == -1) {
			cout << -1 << endl;
			return;
		}
		if (swap_1 < n / 2 and swap_2 >= n / 2) {
			//swap(a1[swap_1], a1[swap_2]);
			for (auto &it : a1) {
				cout << it << " ";
			}
			cout << endl;
			return;
		}
		else {
			cout << -1 << endl;
			return;
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
