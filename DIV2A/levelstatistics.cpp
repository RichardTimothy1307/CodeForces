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
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		//cout << a << b << endl;
		v.PB(MP(a, b));
	}
	bool flag = true;
	if (n == 1) {
		if (v[0].second > v[0].first) {
			cout << "NO" << endl;
			return;
		}
		cout << "YES" << endl;
		return;
	}

	int delta_p = 0, delta_c = 0;

	for (int i = 0; i < v.size(); i++) {

		delta_p = v[i].first - delta_p;
		delta_c = v[i].second - delta_c;

		if (delta_p >= 0 and delta_c >= 0 and delta_p >= delta_c) {
			//
		}
		else {
			flag = false;
			break;
		}

		delta_p = v[i].first;
		delta_c = v[i].second;



	}
	if (flag) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
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