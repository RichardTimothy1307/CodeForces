#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	cin >> n >> k;
	priority_queue<int>pq;
	while (n--) {
		int f, t;
		int joy;
		cin >> f >> t;
		if (t > k) {
			joy = f - (t - k);
			pq.push(joy);
		} else if (t <= k) {
			joy = f;
			pq.push(joy);
		} else {}
	}

	cout << pq.top() << endl;




	return 0;
}