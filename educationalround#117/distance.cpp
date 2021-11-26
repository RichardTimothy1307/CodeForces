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

	int a, b;
	cin >> a >> b;
	int sum = a + b;
	//cout << sum << endl;
	if (a == 0 and b == 0) {
		cout << 0 << " " << 0 << endl;
	}
	else if (sum % 2 != 0) {
		cout << -1 << " " << -1 << endl;
	}
	else {
		sum /= 2;
		if (a == 0) {
			cout << 0 << " " << b / 2 << endl;
			return;
		}
		else if (b == 0) {
			cout << a / 2 << " " << 0 << endl;
			return;
		}

		if (a % 2 == 0 and b % 2 == 0) {
			cout << a / 2 << " " << b / 2 << endl;
			return;
		}
		else {
			a += 1;
			b -= 1;
			cout << a / 2 << " " << b / 2 << endl;
			return;
		}

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
