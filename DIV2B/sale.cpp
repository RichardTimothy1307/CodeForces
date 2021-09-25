#include<bits/stdc++.h>
using namespace std;
#define ll long long
double pi = 3.1415926536;

int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	vector<int> pos, neg;
	int negs = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x >= 0) {
			pos.push_back(x);
		} else {
			x *= -1;
			negs++;
			neg.push_back(x);
		}
	}
	sort(neg.begin(), neg.end(), greater<int>());
	int profit = 0;
	if (negs >= m) {
		for (int i = 0; i < m; i++) {
			profit += neg[i];
		}
	} else {
		for (int i = 0; i < negs; i++) {
			profit += neg[i];
		}
	}
	cout << profit << endl;



	return 0;
}