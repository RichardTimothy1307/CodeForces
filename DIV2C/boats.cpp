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
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	map<int, int> m;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			m[a[i] + a[j]]++;
		}
	}
	int max = -1;
	int sum = 0;
	vector<int> sums;
	for (auto it : m) {
		if (it.first != 0 ) {
			sums.push_back(it.first); //cout << it.first << endl;
		}

	}


	int k = 0;
	while (k < sums.size()) {
		set<int> s1;
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if (a[i] + a[j] == sums[k] and s1.count(i) == 0 and s1.count(j) == 0) {
					//cout << i << " " << j << endl;
					s1.insert(i);
					s1.insert(j);
				}
			}
		}
		int u = s1.size();
		if (max < u) {
			max = s1.size();
			//cout << max << endl;
		}

		k++;
	}

	cout << max / 2  << endl;

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