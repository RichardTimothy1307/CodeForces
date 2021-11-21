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
	for (int i = 0; i < n; i++) {        // 1 2 3 4 5 6  --> 1 and 6 has largest then 2 and 5 then 3 and 4

		cin >> a[i];
	}
	sort(a, a + n);
	int i, j;
	if (n & 1) {
		i = (n / 2) ;
		j = (n / 2) + 1;
	}
	else {
		i = (n / 2) - 1;
		j = (n / 2) ;
	}
	//cout << i << " " << j << endl;
	while (i >= 0 and j < n) {
		cout << a[i] << " " << a[j] << " ";
		i--;
		j++;
	}
	if (n & 1) {

		cout << a[0];
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
