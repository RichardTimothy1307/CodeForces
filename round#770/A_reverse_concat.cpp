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


	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	if (k == 0) {
		cout << 1 << endl;
	}
	else {
		int count = 1;
		int r = 0;
		int l = n - 1;
		bool flag = true;
		while (r < l) {
			if (s[r] != s[l]) {
				flag = false;
				break;
			}
			r++;
			l--;
		}
		if (flag == false) {
			cout << count + 1 << endl;
		}
		else {
			cout << 1 << endl;
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