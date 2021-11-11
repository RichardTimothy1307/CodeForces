#include<bits/stdc++.h>
using namespace std;
#define ll long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair
const int mod = 1e7;
//vector<int> graph[(int)1000];  //defining array of vectors

void solve() {
	string s;
	cin >> s;
	string s1;
	cin >> s1;
	map<char, int> m;
	for (int i = 0; i < s.size(); i++) {
		m[s[i]] = i + 1;
	}
	int ans = 0;
	for (int i = 0; i < s1.size() - 1; i++) {
		ans += abs(m[s1[i]] - m[s1[i + 1]]);
	}
	cout << ans << endl;

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
