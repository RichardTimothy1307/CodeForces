#include<bits/stdc++.h>
using namespace std;


int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	/*if (ch >= 65 && ch <= 90) {
				cout << (char)((char)s[i] + 32);
			}*/


	string s1;
	string s2;
	cin >> s1 >> s2;
	bool a = false, b = false;

	for (int i = 0; i < s1.size(); i++) {
		int ch1 = s1[i];
		int ch2 = s2[i];
		if (ch1 >= 65 && ch1 <= 90) {
			ch1 += 32;
			s1[i] = ch1;
		}
		if (ch2 >= 65 && ch2 <= 90) {
			ch2 += 32;
			s2[i] = ch2;
		}
	}
	/*cout << s1 << endl; cout << s2;*/

	for (int i = 0; i < s1.size(); i++) {
		if (s1[i] > s2[i]) {
			a = true;
			break;
		}
		else if (s2[i] > s1[i]) {
			b = true;
			break;
		} else {
			//
		}
	}
	if (a == true) {
		cout << 1 << endl;
	}
	else if (b == true) {
		cout << -1 << endl;
	}
	else {
		cout << 0 << endl;
	}

	return 0;

}




















 