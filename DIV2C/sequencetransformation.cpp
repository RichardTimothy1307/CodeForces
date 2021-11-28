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
	vector<int> a(n);

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<int> v;
	map<int, int> m;
	for (int i = 0; i < n;) {
		if (a[i] == a[i + 1] and i + 1 < n) {
			int k = i;
			while (a[k] == a[k + 1]) {
				if (a[k] != a[k + 1]) {
					break;
				}
				k++;
			}
			i = k;
		}
		else {
			v.push_back(a[i]);
			m[a[i]]++;
			i++;
		}
	}

	int min = 1e8;

	for (auto &it : m) {

		int segments = it.second + 1;

		if (it.first == v[0]) {
			segments--;
		}
		if (it.first == v[v.size() - 1]) {
			segments--;
		}


		if (min > segments) {
			min = segments;
		}

	}

	cout << min << endl;






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