#include<bits/stdc++.h>
using namespace std;


int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	/*	string s = "Hello";
		char ch = s[0];
		cout << (char)((char)s[0] + 32) << endl;*/

	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		char s1 = s[i];
		if (s1 == 'A' || s1 == 'E' || s1 == 'I' || s1 == 'O' || s1 == 'U' || s1 == 'Y' || s1 == 'a' || s1 == 'e' || s1 == 'i' || s1 == 'o' || s1 == 'u' || s1 == 'y') {
			//
		}
		else {
			cout << ".";
			char ch = s[i];
			int ch1 = ch;
			if (ch >= 65 && ch <= 90) {
				cout << (char)((char)s[i] + 32);
			} else {
				cout << ch;
			}
		}
	}

	return 0;

}




















 