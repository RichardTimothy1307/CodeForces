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
//to_ullong()

void solve() {


	int n, x, y;
	cin >> n >> x >> y;
	int a[n];
	int sum = 0;
	for (auto &it : a) {
		cin >> it;
		sum += it;
	}

	if (sum % 2 == 0) {
		//if sum is even and y is odd that means x or x+3 has to be odd even+odd=odd if sum odd then x or x+3 even one
		//if sum is odd the other way around

		if (y % 2 == x % 2) {
			cout << "Alice" << endl;
		}
		else {
			cout << "Bob" << endl;
		}

	}
	else {
		if (y % 2 != x % 2) {
			cout << "Alice" << endl;
		}
		else {
			cout << "Bob" << endl;
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