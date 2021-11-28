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
	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	int k, j;
	if (v.size() == 2) {
		cout << v[0] << " " << v[1] << endl;
		return;
	}
	int min = INT_MAX;
	for (int i = 0; i < n - 1; i++) {
		if (v[i + 1] - v[i] < min) {
			k = i + 1;
			//j = i + 1;
			min = v[i + 1] - v[i];
		}
	}


	for (int i = k; i < n; i++) {
		cout << v[i] << " ";
	}
	for (int i = 0; i < k; i++) {
		cout << v[i] << " ";
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