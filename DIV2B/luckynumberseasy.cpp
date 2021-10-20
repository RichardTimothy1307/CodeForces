#include<bits/stdc++.h>
using namespace std;
#define int long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair



void solve() {
	string s;
	cin >> s;
	int n = s.size();
	int a[n];
	vector<int> comp;
	int count4 = 0, count7 = 0;
	for (int i = 0; i < n; i++) {
		a[i] = s[i] - '0';
		comp.PB(a[i]);
		if (a[i] == 4) {
			count4++;
		}
		else if (a[i] == 7) {
			count7++;
		}
	}
	//cout << count4 << count7 << endl;
	if (count4 == count7 and count4 + count7 == n) {
		cout << s << endl;
	}
	else {

		if (n % 2 != 0) {
			n = n + 1;
			vector<int> v;
			for (int i = 0; i < n; i++) {
				if (i < n / 2) {
					v.push_back(4);
				}
				else {
					v.push_back(7);
				}
			}
			for (auto it : v) {
				cout << it;
			}
			cout << endl;
			return;

		}
		vector<int> v;
		for (int i = 0; i < n; i++) {
			if (i < n / 2) {
				v.push_back(4);
			}
			else {
				v.push_back(7);
			}
		}

		if (a[0] > 7 or (a[0] == 7 and a[1] > 7)) {
			int new_size = n + 2;
			v.PB(4);
			v.PB(7);
			sort(v.begin(), v.end());
			for (auto it : v) {
				cout << it;
			}
			cout << endl;
			return;
		}
		do {
			if (v > comp) {
				break;
			}
		} while (next_permutation(v.begin(), v.end()));

		if (comp > v) {
			int new_size = n + 2;
			v.PB(4);
			v.PB(7);
			sort(v.begin(), v.end());
			for (auto it : v) {
				cout << it;
			}
			cout << endl;
			return;
		}
		for (auto it : v) {
			cout << it;
		}
		cout << endl;



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
