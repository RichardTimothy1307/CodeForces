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
	map<char, int> m;
	for (int i = 0; i < s.size(); i++) {
		m[s[i]]++;
	}
	int odds = 0;
	for (auto it : m) {
		if (it.second % 2 != 0) {
			odds++;
		} else {
			//
		}
	}
	if (odds == 0 || odds & 1) { //if odds are zero then even will always make palindrome , first will always make odd increase and win
		cout << "First" << endl;
	} else {
		cout << "Second" << endl;
	}

	return 0;
}