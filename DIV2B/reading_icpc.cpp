#include<bits/stdc++.h>
using namespace std;
#define ll long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair




void solve() {
	int n, k;
	cin >> n >> k;
	int a[n];
	vector<pair<int, int>> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		
		m.PB(MP(a[i], i + 1));   //*first create pair of every element with orignal index
		                        //*No map because it will all the elements unique
	}
	sort(a, a + n);    //*sort the array
	/*for (auto it : a) {
		cout << it << " ";
	}*/
	//cout << endl;
	int u = n - 1;    //*start index from last to print last k elements index
	int l = u;
	int x = k;
	while (x--) {    //*finding the first element from last k
		l--;
	}
	cout << a[l + 1] << endl;
	int h = k;
	while (k--) {    //*since we have to print k times

		for (int i = 0; i < n; i++) {
			if (h == 0) {
				break;
			}
			if (m[i].first == a[u]) {    //*search in the orignal pair and print its second value
				cout << m[i].second << " ";
				u--;
				h--;
			}
		}
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
	solve();

	return 0;


}
