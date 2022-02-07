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


	int h_c, d_c, h_m, d_m, k, w, a;

	cin >> h_c >> d_c;
	cin >> h_m >> d_m;
	cin >> k >> w >> a;







	for (int i = 0; i <= k; i++) {  //trying out all possiblities of choosing attack and health i and k-i
		int hc, dc;
		dc = d_c + (i * w);
		hc = h_c + ((k - i) * a);

		int win_c = 0;
		int win_m = 0;

		win_c = ceil((h_m * 1.0) / (1.0 * dc));
		win_m = ceil((1.0 * hc) / (1.0 * d_m));

		//cout << win_c << " " << win_m << endl;
		if (win_c <= win_m) {
			cout << "YES" << endl;
			return;
		}

	}





	//cout << win_c << " " << win_m << " " << h_c << endl;

	cout << "NO" << endl;



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