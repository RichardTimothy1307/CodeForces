#include<bits/stdc++.h>
using namespace std;


int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s = "hello";
	string s1;
	cin >> s1;
	int f = 0; int j = 0;
	for (int i = 0; i < 5; i++) {

		while (s1[j] != '\0') {
			if (s[i] == s1[j]) {
				j++;
				f++;
				break;
			} else {
				j++;
			}
		}

	}
	if (f == 5) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}



	return 0;

}




















 