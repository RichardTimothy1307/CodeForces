#include<bits/stdc++.h>
using namespace std;



int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;
	vector<pair<int, int>> v;
	vector<pair<int, int>> v1;

	if (s.size() < 3) {
		cout << s << endl;
	}
	else {
		for (int i = 0; i < s.size() - 2; i++) {
			if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
				int x = i;
				int y = (i + 2);
				v.push_back(make_pair(x, y));
				/*	cout << x << " " << y << endl;*/
			}
		}

		if (v.size() == 0) {
			cout << s << endl;
		}
		else {
			string first, last;
			if (v[0].first != 0) {
				for (int i = 0; i < v[0].first; i++) {
					first += s[i];
				}
				first += " ";
			}


			if (v[v.size() - 1].second != s.size() - 1) {
				/*cout << v[v.size() - 1].second << endl;
				cout << s.size() - 1 << endl;*/
				for (int i = v[v.size() - 1].second + 1; i < s.size(); i++) {
					last += s[i];
				}
			}

			/*cout << first << endl;
			cout << last << endl;*/


			for (int i = 0; i < v.size() - 1; i++) {
				/*cout << v[i].second << " " << v[i + 1].first << endl;*/
				if ((v[i + 1].first - v[i].second) != 1) {
					int a = v[i].second + 1;
					int b = v[i + 1].first - 1;
					/*cout << a << " " << b << endl;*/
					v1.push_back(make_pair(a, b));
				}
			}
			string final;
			for (int i = 0; i < v1.size(); i++) {
				for (int j = v1[i].first; j <= v1[i].second; j++) {
					final += s[j];
					/*cout << s[j];*/
				}
				final += " ";
				/*cout << " ";*/
			}

			if (final == " " && first == " ") {
				cout << last;
			}
			else if (final == " " && last == " ") {
				cout << first;
			}
			else if (final == " " && first != " " && last != " ") {
				cout << first + last;
			} else {
				cout << first + final + last;

			}
		}
	}





	return 0;

}




















 