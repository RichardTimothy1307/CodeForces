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


	int n;
	cin >> n;
	vector<pair<int, int>> v(n);

	for (int i = 0; i < n; i++)cin >> v[i].first; //time
	for (int i = 0; i < n; i++)cin >> v[i].second; //power

	int ans = 0;

	/*7 9   maxa=2 maxid=9 last=9 now=2
	  1 2*/

	int maxa = v[n - 1].second, maxid = v[n - 1].first, last = maxid, now = maxa;

	for (int i = n - 2; i >= 0; i--) {

		//when there is no intersection

		if ((last - now) >= v[i].first) {
			ans += (maxa * (maxa + 1) / 2);
			maxa = v[i].second;
			maxid = v[i].first;
			last = maxid;
			now = maxa;
		}
		//there is intersection but it doesnt matter as the value on it is greater
		//  5 6 7 8 9
		//  1 2 3 4 5
		//  here we see 3>1  now=5 last=9 v[i].first=7 v[i].second=1  5-(9-7)=3>1

		else if (now - (last - v[i].first) >= v[i].second) {
			continue;
		}
		// 7 9
		// 4 5
		//5 6 7 8 9
		//1 2 3 4 5
		//will not work because 3 < 4
		//so 4 5 6 7 8 9
		//	 1 2 3 4 5 6
		else {
			maxa = v[i].second + maxid - v[i].first;
			last = v[i].first;
			now = v[i].second;
		}

	}
	ans += (maxa * (maxa + 1) / 2);
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
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;


}