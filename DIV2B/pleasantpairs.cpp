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
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++) {

		cin >> a[i];
		v.push_back(make_pair(a[i], i + 1));

	}
	sort(v.begin(), v.end());
	int pairs = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {


			if ((v[i].first * v[j].first) > 2 * n) {
				break;
			}

			if ((v[i].first * v[j].first) == (v[i].second + v[j].second)) {
				pairs++;
			}

		}
	}
	cout << pairs << endl;

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