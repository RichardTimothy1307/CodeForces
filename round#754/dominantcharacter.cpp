#include<bits/stdc++.h>
using namespace std;
#define ll long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair
const int mod = 1e7;
//vector<int> graph[(int)1000];  //defining array of vectors

void solve() {

	int n;
	cin >> n;
	string s;
	cin >> s;
	int count_a = 0;
	vector<int> indexes;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'a') {
			count_a++;
			indexes.PB(i);
		}

	}
	if (count_a == 0 or count_a == 1) {
		cout << -1 << endl;
		return;
	}
	else {
		for (int i = 0; i < indexes.size() - 1; i++) {
			if (indexes[i + 1] - indexes[i] == 1) {
				cout << 2 << endl;
				return;
			}
		}
		for (int i = 0; i < indexes.size() - 1; i++) {
			if (indexes[i + 1] - indexes[i] == 2) {
				cout << 3 << endl;
				return;
			}
		}
		bool four = false;
		for (int i = 0; i < indexes.size() - 1; i++) {
			if (indexes[i + 1] - indexes[i] == 3) {
				if ((s[indexes[i] + 1] == 'b' and s[indexes[i] + 2] == 'c') or (s[indexes[i] + 1] == 'c' and s[indexes[i] + 2] == 'b' )) {
					cout << 4 << endl;
					return;
				}
			}
		}
		for (int i = 0; i < indexes.size() - 1; i++) {
			if (indexes[i + 1] - indexes[i] == 3) {
				if (indexes[i + 1] + 3 < n) { //so that the minimum length is 7
					if (s[indexes[i] + 1] == 'b' and s[indexes[i] + 2] == 'b' and s[indexes[i + 1] + 1] == 'c' and s[indexes[i + 1] + 2] == 'c' and s[indexes[i + 1] + 3] == 'a') {
						cout << 7 << endl;
						return;
					}
					if (s[indexes[i] + 1] == 'c' and s[indexes[i] + 2] == 'c' and s[indexes[i + 1] + 1] == 'b' and s[indexes[i + 1] + 2] == 'b' and s[indexes[i + 1] + 3] == 'a') {
						cout << 7 << endl;
						return;
					}

				}
			}
		}
		cout << -1 << endl;

	}



}

int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;


}
