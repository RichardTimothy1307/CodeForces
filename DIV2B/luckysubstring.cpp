#include<bits/stdc++.h>
using namespace std;
#define ll long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair
int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;
	int count_4 = 0;
	int count_7 = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '4') {
			count_4++;
		} else if (s[i] == '7') {
			count_7++;
		} else {
			//
		}
	}
	if (count_4 == 0 and count_7 == 0) {
		cout << -1 << endl;
	}
	else if (count_4 >= count_7) {
		cout << 4 << endl;
	} else if (count_4 < count_7) {
		cout << 7 << endl;
	}


	return 0;

}