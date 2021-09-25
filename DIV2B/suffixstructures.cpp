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
	string s1;
	string s2;
	cin >> s1 >> s2;
	map<char, int>m1, m2;
	bool automaton;
	bool checkforboth = false;
	bool checkforneedtree = false;
	if (s1.size() != s2.size() && checkforboth == false) {
		for (int i = 0; i < s1.size(); i++) {
			if (s1[i] == s2[0]) {
				string s3 = "";
				int k = 0;
				for (int j = i; j < s1.size(); j++) {
					if (s1[j] == s2[k]) {
						s3 += s1[j];
						k++;
					} else {
						//
					}
				}
				if (s3 == s2) {
					automaton = true;
					break;
				} else {
					automaton = false;
				}
			}
			if (automaton == true) {
				break;
			} else {
				continue;
			}
		}
		if (automaton) {
			cout << "automaton" << endl;
		}
		else {
			checkforboth = true;
		}
	}
	if (s1.size() == s2.size() && checkforneedtree == false) {
		for (int i = 0; i < s1.size(); i++) {
			m1[s1[i]]++;
			m2[s2[i]]++;
		}
		bool suffix = true;
		for (int i = 0; i < s1.size(); i++) {
			if (m1[s1[i]] == m2[s1[i]]) {
				//
			} else {
				suffix = false;
				break;
			}
		}
		if (suffix) {
			cout << "array" << endl;
		} else {
			checkforneedtree = true;
		}
	}
	if (checkforboth == true) {
		for (int i = 0; i < s1.size(); i++) {
			m1[s1[i]]++;
			/*cout << s1[i] << " " << m1[s1[i]] << endl;*/
		} for (int i = 0; i < s2.size(); i++) {
			m2[s2[i]]++;
		}
		bool check = true;
		for (int k = 0; k < s2.size(); k++) {
			if (m2[s2[k]] <= m1[s2[k]]) {
				//
			}
			else {
				check = false;
				break;
			}
		}
		if (check) {
			cout << "both" << endl;
			checkforneedtree = false;
		} else {
			checkforneedtree = true;
		}
	}
	if (checkforneedtree) {
		cout << "need tree" << endl;
	}
	return 0;
}