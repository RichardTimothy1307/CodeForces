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


	string s;
	cin >> s;
	string s1 = s;
	for (int i = s.size() - 1; i > 0; i--) {
		int first = s[i] - '0';
		int second = s[i - 1] - '0';
		//cout << first << " " << second << endl;
		if (first + second >= 10) {
			string s1;
			first += second;
			string f = to_string(first);
			//cout << f << endl;
			s[i - 1] = f[0];
			s[i] = f[1];
			break;
		}

	}

	if (s1 == s) {
		int first = s[0] - '0';
		int second = s[1] - '0';
		first += second;
		string f = to_string(first);
		cout << f;
		for (int i = 2; i < s.size(); i++) {
			cout << s[i];
		}
		cout << endl;
	}
	if (s1 != s) {
		cout << s << endl;
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