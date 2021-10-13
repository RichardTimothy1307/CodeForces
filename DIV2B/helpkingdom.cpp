#include<bits/stdc++.h>
using namespace std;
#define int long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair
int mod = 1e9 + 7;


void solve() {
	string s;
	cin >> s;
	bool decimal = false;
	char afterdecimal1 = '0';
	char afterdecimal2 = '0';
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '.') {
			decimal = true;
			if ((i + 1) < s.size()) {
				afterdecimal1 = s[i + 1];
			}
			if ((i + 2) < s.size()) {
				afterdecimal2 = s[i + 2];
			}

			break;
		}
	}
	//cout << afterdecimal1 << afterdecimal2 << endl;
	if (s[0] == '-') {
		string newstring;
		for (int i = 1; i < s.size(); i++) {
			if (s[i] == '.') {
				break;
			}
			newstring += s[i];
		}
		string finalstring;
		int count = 0;
		for (int i = newstring.size() - 1; i >= 0; i--) {
			if (newstring[i] == '.') {
				break;
			}
			if (count % 3 == 0 && count != 0) {
				finalstring += ',';
				finalstring += newstring[i];
			} else {
				finalstring += newstring[i];
			}
			count++;

		}
		reverse(finalstring.begin(), finalstring.end());

		finalstring += '.';
		finalstring += afterdecimal1;
		finalstring += afterdecimal2;
		finalstring += ')';
		cout << "($" << finalstring << endl;



	} else {
		string newstring;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '.') {
				break;
			}
			newstring += s[i];
		}

		string finalstring;
		int count = 0;
		for (int i = newstring.size() - 1; i >= 0; i--) {
			if (newstring[i] == '.') {
				break;
			}
			if (count % 3 == 0 && count != 0) {
				finalstring += ',';
				finalstring += newstring[i];
			} else {
				finalstring += newstring[i];
			}
			count++;

		}
		reverse(finalstring.begin(), finalstring.end());

		finalstring += '.';
		finalstring += afterdecimal1;
		finalstring += afterdecimal2;
		cout << "$" << finalstring << endl;


	}

}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();

	return 0;


}
