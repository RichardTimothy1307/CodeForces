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
	vector<string> v;
	string final;
	for (int i = 0; i < n - 2; i++) {
		string s;
		cin >> s;
		final += s;
	}
	set<int> not_index;
	for (int i = 0; i < final.length(); i++) {
		if ((final[i + 1] == final[i + 2]) and (i + 1 < final.length()) and (i + 2 < final.length())) {
			not_index.insert(i + 1);
			i++;
		}
	}
	string new_final;

	for (int i = 0; i < final.length(); i++) {
		if (not_index.count(i) == 0) {
			new_final += final[i];
		}
	}

	if (new_final.length() < n) {
		int ext = n - new_final.length();
		for (int i = 0; i < ext; i++) {
			new_final += new_final[new_final.length() - 1];
		}
	}

	cout << new_final << endl;
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