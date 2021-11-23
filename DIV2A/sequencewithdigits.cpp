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

	int a, k;
	cin >> a >> k;
	int start = 1;
	while (start < k) {

		int maxi = 0;
		int mini = 10; //since 9
		int temp = a;

		while (a > 0) {
			int rem = a % 10;
			maxi = max(maxi, rem);
			mini = min(mini, rem);
			a /= 10;

		}


		a = temp + maxi * mini;
		start++;

		if (mini == 0) {
			break;
		}


	}

	cout << a << endl;

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
