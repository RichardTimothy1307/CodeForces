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

void binary_search(int a[], int x, int start, int end) {
	//base case when start becomes bigger than end or goes past end or end comes before start
	int mid = start + (end - start) / 2;
	//cout << mid << endl;
	if (start > end or end < start) {
		cout << -1 << endl;
		return;
	}
	if (a[mid] >= x and a[mid - 1] < x) {
		cout << mid + 1;
		return;
	}
	if (x > a[mid]) {
		binary_search(a, x, mid + 1, end);
	}
	if (x < a[mid]) {
		binary_search(a, x, start, mid - 1);
	}


}

void solve() {
	int n;
	cin >> n;
	int a[n];
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
		a[i] = sum;
	}
	int m;
	cin >> m;
	int q[m];
	for (int i = 0; i < m; i++) {
		cin >> q[i];
		if (q[i] <= a[0]) {
			cout << 1 << endl;
		}
		else {
			binary_search(a, q[i], 0, n - 1);
			cout << endl;
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
