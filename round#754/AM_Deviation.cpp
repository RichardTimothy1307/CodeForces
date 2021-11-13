#include<bits/stdc++.h>
using namespace std;
#define ll long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair
const int mod = 1e7;
//vector<int> graph[(int)1000];  //defining array of vectors

void solve() {

	ll int a1, a2, a3;
	cin >> a1 >> a2 >> a3;
	if ((a2 - a1) == (a3 - a2)) {
		cout << 0 << endl;
		return;
	}
	else {
		if ((a1 + a3 - (2 * a2) + 3) % 3 == 0) {
			cout << 0 << endl;
			return;
		} else {
			cout << 1 << endl;
			return;
		}
	}

}

int main() {
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
