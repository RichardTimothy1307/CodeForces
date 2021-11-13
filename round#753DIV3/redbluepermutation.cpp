#include<bits/stdc++.h>
using namespace std;
#define ll long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair
const int mod = 1e7;
//vector<int> graph[(int)1000];  //defining array of vectors

void solve() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		bool flag = true;
		string s;
		cin >> s;
		set<char>single;
		multimap<char, int> m;
		for (int i = 0; i < n; i++) {
			m.insert(MP(s[i], a[i]));
			single.insert(s[i]);
		}
		vector<int> b, r;
		int series = 1;
		//bool flag = true;
		for (auto it : m) {
			if (it.first == 'B') {
				b.push_back(it.second);
			}
			else {
				r.push_back(it.second);
			}
		}
		sort(b.begin(), b.end());
		sort(r.begin(), r.end());
		for (auto it : b) {
			if (it >= series) {
				series++;
			} else {
				flag = false;
				break;
			}
		}
		for (auto it : r) {
			if (it <= series) {
				series++;
			}
			else {
				flag = false;
				break;
			}
		}

		/*for (auto it : m) {
			cout << it.first << " " << it.second << endl;
		}
		cout << endl;*/

		if (flag == false) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
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
	//cin >> t;
	while (t--) {
		solve();
	}

	return 0;


}
