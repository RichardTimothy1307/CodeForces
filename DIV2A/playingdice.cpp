#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b;
	cin >> a >> b;
	int a_wins = 0, draws = 0, b_wins = 0;
	for (int i = 1; i <= 6; i++) {
		if (abs(a - i) < abs(b - i)) {
			a_wins++;
		} else if (abs(a - i) == abs(b - i)) {
			draws++;
		} else {
			b_wins++;
		}
	}
	cout << a_wins << " " << draws << " " << b_wins << endl;



	return 0;
}