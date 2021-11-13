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
	vector<int> v;
	vector<int> v1;
	for (int i = 0; i < s.size(); i++) {
		v.push_back(s[i] - 48);
		v1.push_back(s[i] - 48);
	}
	sort(v.begin(), v.end());
	if (v == v1) {
		cout << 0 << endl;
	}
	else {
		int index_0;
		int index_1;
		for (int i = 0; i < n - 1; i++) {
			if (v[i] == 0 and v[i + 1] == 1) {
				index_0 = i;
				index_1 = i + 1;
				break;
			}
		}
		//cout << index_0 << " " << index_1 << endl;
		vector<int> indexes;
		for (int i = 0; i <= index_0; i++) {
			if (v1[i] == 1) {
				indexes.push_back(i);
			}
		}
		for (int i = index_1; i < v.size(); i++) {
			if (v1[i] == 0) {
				indexes.push_back(i);
			}
		}

		cout << 1 << endl;
		cout << indexes.size() << " "; sort(indexes.begin(), indexes.end()); for (auto it : indexes) {cout << it + 1 << " ";}
		cout << endl;
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
