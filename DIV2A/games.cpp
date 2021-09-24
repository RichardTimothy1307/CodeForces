#include<bits/stdc++.h>
using namespace std;



int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int N = n;
	vector<int> v1;
	vector<int> v2;
	while (n--) {
		int x , y;
		cin >> x >> y;
		v1.push_back(x);
		v2.push_back(y);
	}
	int change = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (v1[i] == v2[j]) {
				change++;
			}
		}
	}
	cout << change;
	return 0;

}




















 