#include<bits/stdc++.h>
using namespace std;
#define ll long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair
//long long mod = 1e6 + 3;




int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s1;
	string s2;
	cin >> s1 >> s2;
	map<char, int> m1, m2;
	bool canmake = true;
	for (int i = 0; i < s1.size(); i++) {

		m1[s1[i]]++;
	}
	for (int i = 0; i < s2.size(); i++) {
		m2[s2[i]]++;
		if (m1[s2[i]] == 0) {
			canmake = false;
			break;
		}
	}
	int area = 0;
	if (canmake == false) {
		cout << -1 << endl;
	} else {
		set<char> s;
		for (int i = 0; i < s2.size(); i++) {
			if (s.count(s2[i]) == 0) {
				//cout << s2[i] << endl;
				if (m1[s2[i]] > m2[s2[i]]) {
					area += m2[s2[i]];
				} else if (m1[s2[i]] == m2[s2[i]]) {
					area += m1[s2[i]];
				} else if (m1[s2[i]] < m2[s2[i]]) {
					area += m1[s2[i]];
				}
				s.insert(s2[i]);
			}
			else {
				//
			}
		}
		cout << area << endl;
	}




	return 0;

}
