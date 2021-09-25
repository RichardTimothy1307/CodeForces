#include<bits/stdc++.h>
using namespace std;
#define ll long long



int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	double r, x, y, x1, y1;
	cin >> r >> x >> y >> x1 >> y1;
	double d0 = (x - x1) * (x - x1) + (y - y1) * (y - y1);
	double d = sqrt(d0);
	int count = ceil(d / (2.000 * r));
	cout << count << endl;





	return 0;
}