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
	//cout << s << endl;
	map<char, int> m;

	for (int i = 0; i < s.size(); i++) {
		//cout << s[i] << endl;
		m[s[i]]++;
	}
	vector<char> v;
	int count = 0;
	vector<char> v1;
	for (auto it : m) {
		if (it.second == 2) {
			//cout << it.first << endl;
			v.push_back(it.first);
			count++;
		}
		else {
			v1.push_back(it.first);
		}
	}

	string final;

	int chars = 0;
	for (int i = 0; i < v.size() ; i++) {
		final += v[i];

	}
	for (int i = 0; i < v.size(); i++) {
		final += v[i];
	}

	int j = 0;
	for (j = 0; j < v1.size(); j++) {
		final += v1[j];
	}

	cout << final << endl;


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