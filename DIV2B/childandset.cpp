#include<bits/stdc++.h>
using namespace std;
#define int long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair

void solve() {
	int sum, limit;
	cin >> sum >> limit;
	//since all odds have 1 as low bit and powers of 2 have the number itself and we need to calculate for other ones
	int total_sum = 0;
	map<int, vector<int> > mp;
	for (int i = 1; i <= limit; i++) {

		bitset<32> number = i;
		for (int j = 0; j < 32; j++) {
			if (number[j] == 1) {
				mp[-1 << j].push_back(i);
				total_sum += (1 << j);
				break;
			}
		}

	}
	vector<int> ans;
	if (sum > total_sum) {
		cout << -1 << endl;
		return;
	}
	else {
		for (auto i : mp) {
			//cout << i.first << endl;
			for (auto j : i.second) {

				if (sum >= -i.first) { //since i.first is neg so - will get to pos
					sum += i.first;
					ans.push_back(j);

				} else {
					break;
				}
			}
		}

		cout << ans.size() << endl;
		for (auto it : ans) {
			cout << it << " ";
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
