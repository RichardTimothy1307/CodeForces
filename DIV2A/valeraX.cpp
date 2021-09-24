#include<bits/stdc++.h>
using namespace std;




int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	char a[n][n];
	set<char> d1;
	set<char> d2;
	set<char> others;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	//for the main diagonal
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) {
				d1.insert(a[i][j]);
			}
		}
	}
	//for the reverse diagonal
	int k = n - 1;
	for (int i = 0; i < n; i++) {
		d2.insert(a[i][k]);
		k--;
	}
	//for all others
	for (int i = 0; i < n; i++) {
		for (int j = 0;  j < n; j++) {
			if (i == j or j == (n - 1 - i)) {
				//
			} else {
				others.insert(a[i][j]);
			}
		}
	}



	char diagonal = a[0][0];
	int count1 = others.count(diagonal);

	if (d1.size() == 1 && d2.size() == 1 && others.size() == 1 && count1 != 1) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}





	return 0;
}