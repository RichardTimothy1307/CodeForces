#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long n, v;
	cin >> n >> v;
	long long total = 0;
	priority_queue<long long, vector<long long> , greater<long long>>pq;
	while (total < n) {
		long long k;
		cin >> k;
		bool buy = true;
		long long t = 0;
		for (int i = 0; i < k; i++) {
			long long x;
			cin >> x;
			if (x < v) {
				t++;
			} else {

			}
		}
		if (t > 0) {
			buy = true;
		} else {
			buy = false;
		}
		if (buy) {
			pq.push(total + 1);
		} else {
			//
		}

		total++;
	}

	if (!pq.empty()) {
		cout << pq.size() << endl;
		while (!pq.empty()) {
			cout << pq.top() << " ";
			pq.pop();
		}
	} else {
		cout << 0 << endl;
	}

	return 0;
}