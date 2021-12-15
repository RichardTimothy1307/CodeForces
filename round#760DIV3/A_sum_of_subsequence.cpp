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


	int n = 7;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int last = a[6] - a[5];
	int second_last = a[6] - a[4];
	int third_last = a[6] - a[3];
	int third_last_1 = a[6] - a[2];

	if (last + second_last + third_last == a[6]) {
		cout << last << " " << second_last << " " << third_last << endl;
	}
	else {
		cout << last << " " << second_last << " " << third_last_1 << endl;
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