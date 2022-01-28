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
	n = n + 2;
	int a[n];

	for (auto &it : a)cin >> it;

	sort(a, a + n);
	int sum = 0;


	for (int i = 0; i <= n - 3; i++) {
		sum += a[i];
	}

//	cout << sum << endl;

	if (sum == a[n - 2] or sum == a[n - 1]) {
		for (int i = 0; i <= n - 3; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
	else {
		sum += a[n - 2];
		bool thereis = false;
		int not_this_i;
		int to_find = sum - a[n - 1];
		//cout << to_find << endl;
		for (int i = 0; i <= n - 2; i++) {
			if (a[i] == to_find) {
				thereis = true;
				not_this_i = i;
				break;
			}
		}
		if (thereis) {
			for (int i = 0; i <= n - 2; i++) {
				if (i != not_this_i) {
					cout << a[i] << " ";
				}
			}
			cout << endl;
		}
		else {
			cout << -1 << endl;
		}

	}


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