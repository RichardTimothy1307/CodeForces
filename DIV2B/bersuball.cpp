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
	int m;
	cin >> m;
	vector<int> b(m);
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	vector<pair<int, int>> v;
	for (int i = 0; i < a.size(); i++) {
		//cout << a[i] << endl;
		bool done = false;
		for (int j = 0; j < b.size(); j++) {
			if (a[i] == b[j]  ) {
				//cout << a[i] << " " << b[j] << endl;
				v.PB(MP(a[i], b[j]));
				b[j] = 1e5;
				break;

			}
			else if (abs(a[i] - b[j]) == 1) {
				v.PB(MP(a[i], b[j]));
				//cout << a[i] << " " << b[j] << endl;
				b[j] = 1e5;
				break;
			}
			else {


			}
		}

	}

	cout << v.size() << endl;

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
