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

	int n, k;
	cin >> n >> k;

	string s;
	cin >> s;

	set<char> letters;
	for (int i = 0; i < n; i++) {
		char c;
		cin >> c;
		letters.insert(c);
	}

	int ans = 0;

	for (int i = 0; i < n;) {
		int subs = 0;
		if (letters.count(s[i]) == 1) {

			while (letters.count(s[i]) == 1) {
				subs++;
				i++;

				if (letters.count(s[i]) == 0) {
					break;
				}
			}
			ans += subs * (subs + 1) / 2;

		}
		else {
			i++;
		}

	}


	cout << ans << endl;





}







signed main() {
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