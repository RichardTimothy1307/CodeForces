#include<bits/stdc++.h>
using namespace std;



int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	if (x1 != x2 && y1 != y2 && abs(x1 - x2) != abs(y1 - y2))
		cout << -1 << endl;
	else if (x1 == x2)
		cout << x1 + abs(y1 - y2) << " " << y1 << " " << x2 + abs(y1 - y2) << " " << y2 << endl;
	else if (y1 == y2)
		cout << x1 << " " << y1 + abs(x1 - x2) << " " << x2 << " " << y2 + abs(x1 - x2) << endl;
	else
		cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;

	return 0;

}




















 