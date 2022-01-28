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

int gcd(int a, int b) {

	if (b == 0) {
		return a;
	}

	return gcd(b, a % b);


}



void solve() {


	int n;
	cin >> n;
	int gcd_ = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		gcd_ = gcd(gcd_, x);
	}

	//standard method of finding all divisors or number of divisors
	int ans = 0;
	for (int i = 1; i * i <= gcd_; i++) {
		if (gcd_ % i == 0) {
			ans++;

			if (i != gcd_ / i) {   //take an example of 6 first -> 1 comes and gcd_/i->6/1 therefore
				ans++;				//6 also becomes and next 2 comes and gcd_/2->3 therfore it also
			}
		}
	}
	cout << ans << endl;
}



int32_t main() {
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