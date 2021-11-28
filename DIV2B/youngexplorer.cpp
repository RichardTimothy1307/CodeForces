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
	for (auto &it : a)cin >> it;
	int sum = 0;
	sort(a, a + n);
	for (int i = 0; i < n;) {

		int x = 1;  //curr element

		while (x < a[i] and i < n - 1) {     // 1 2 2 2 3 3    //comes to 1 since 1 <=size 1 so ok
			//next at 2 it will try to make group of 2 then next 2 then goes to 3 since size is 2 now
			//it will go ahead try to make group 3 so complete
			x++;
			i++;


		}

		if (x >= a[i]) {
			sum++;
		}

		i++;


	}

	cout << sum << endl;


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