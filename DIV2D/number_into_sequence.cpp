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
	vector<pair<int, int>> factors;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			int count = 0;
			while (n % i == 0) {
				count++;
				n /= i;
			}
			factors.push_back(make_pair(count, i));
		}
	}

	if (n > 1) {
		factors.push_back(make_pair(1, n));
	}

	sort(factors.begin(), factors.end());

	reverse(factors.begin(), factors.end());

	cout << factors[0].first << endl;

	for (int i = 1; i < factors[0].first; i++) {
		cout << factors[0].second << " ";
	}
	int last_element = factors[0].second;

	for (int i = 1; i < factors.size(); i++) {
		for (int j = 0; j < factors[i].first; j++) {
			//cout << factors[i].second << endl;
			last_element *= factors[i].second;
		}
	}
	cout << last_element << endl;


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