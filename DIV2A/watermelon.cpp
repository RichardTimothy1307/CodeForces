#include<bits/stdc++.h>
using namespace std;


int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	int w;
	cin >> w;

	if (w == 2) {
		cout << "NO" << endl;
	} else if (w % 2 == 0) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}


	return 0;

}




















 