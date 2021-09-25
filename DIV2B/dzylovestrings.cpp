#include<bits/stdc++.h>
using namespace std;
#define ll long long



int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;
	int k;
	cin >> k;
	int a[27];
	map<char, int> m;
	int maxi = -1;
	for (int i = 0; i < 26; i++) {
		int x;
		cin >> x;
		maxi = max(maxi, x);
		m[97 + i] = x;
	}

	int no = 0;
	for (int i = 0; i < s.size(); i++) {
		no += m[s[i]] * (i + 1);
	}
	for (int i = s.size(); i < k + s.size(); i++) {
		no += maxi * (i + 1);
	}
	cout << no;

	return 0;
}