#include<bits/stdc++.h>
using namespace std;


int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> v;
	int n;
	cin >> n;
	int a = n;
	bool check = true;
	string s = to_string(n);
	for (int i = 0; i < s.size(); i++) {
		int x = (int)s[i] - 48;
		if (x != 4 && x != 7) {
			check = false;
			break;
		} else {
			//
		}
	}
	if (check == true) {
		cout << "YES" << endl;
	} else if (check == false) {
		/*cout << "unlucky" << endl;*/
		if (n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 44 == 0 || n % 77 == 0 || n % 74 == 0 || n % 744 == 0 || n % 447 == 0 || n % 747 == 0 || n % 474 == 0 || n % 777 == 0 || n % 444 == 0 || n % 774 == 0 || n % 477 == 0)
			cout << "YES" << endl;
		else {
			cout << "NO" << endl;

		}
	}

	return 0;

}




















 