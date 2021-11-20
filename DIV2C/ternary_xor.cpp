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
	string c;
	cin >> c;
	string a, b;
	int x;
	bool cont = false;
	for (int i = 0; i < n; i++) {
		if (c[i] == '2') {
			a += '1';
			b += '1';
		}
		else if (c[i] == '0') {
			a += '0';
			b += '0';
		}
		else if (c[i] == '1') {
			a += '1';
			b += '0';
			x = i;
			cont = true;
			break;
		}
	}
	if (cont == true) {
		for (int i = x + 1; i < n; i++) {
			a += '0';
			b += c[i];
		}

	}


	cout << a << endl;
	cout << b << endl;


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
