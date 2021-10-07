#include<bits/stdc++.h>
using namespace std;
#define ll long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair

//*to check if the string is taxi
bool taxi(string s) {
	bool flag = true;
	int x, y;
	x = 0;
	y = 1;
	while (y < s.size()) {
		//!Edge case for taxi all numbers must be equal
		//!11 - 22 - 33
		//!22 - 33 - 55
		if (s[x] == s[y]) {
			if (x - 2 > 0) {
				if (s[x] == s[x - 2]) {
					//
				} else {
					flag = false;
					break;
				}
			}
			x += 3;
			y += 3;
		} else {
			flag = false;
			break;
		}
	}
	if (flag == true) {
		return true;
	}
	return false;
}
//*to check if the string is pizza
bool pizza(string s) {
	bool flag = true;
	int x, y;
	x = 0;
	y = 1;
	while (y < s.size()) {
		if (s[x] > s[y]) {
			if (x - 2 > 0) {
				if (s[x] < s[x - 2]) {
					//
				} else {
					flag = false;
					break;
				}
			}
			x += 3;
			y += 3;
		} else {
			flag = false;
			break;
		}
	}
	if (flag == true) {
		return true;
	}
	return false;
}


void solve() {
	int n;
	cin >> n;
	vector<vector<string>> v(n);
	vector<string> names;
	for (int i = 0; i < n; i++) {
		int k;
		string name;
		cin >> k >> name;
		names.push_back(name);
		while (k--) {
			string numbers;
			cin >> numbers;
			v[i].push_back(numbers);
		}
	}
	/*for (int i = 0; i < n; i++) {
		cout << names[i] << " ";
		for (auto it : v[i]) {
			cout << it << endl;
		}
	}*/
	//*the vector will have taxi count , pizza count , girl count (corresponding to the names indexes)
	vector < vector<int> > counts(n, vector<int> (3, 0)); //*a 2d vector with n values and inside vector with 3 indexes and 0 to all elements
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < v[i].size(); j++) {
			if (taxi(v[i][j])) {
				counts[i][0]++;
			}
			else if (pizza(v[i][j])) {
				counts[i][1]++;
			} else {
				counts[i][2]++;
			}
		}
	}
	//*here we will calculate taxi max and pizza max and girl max values
	int taximax = -1;
	int pizzamax = -1;
	int girlmax = -1;
	//*for taxi
	for (int i = 0; i < n; i++) {
		if (counts[i][0] > taximax) {
			taximax = counts[i][0];
		}

	}
	//*for pizza
	for (int i = 0; i < n; i++) {
		if (counts[i][1] > pizzamax) {
			pizzamax = counts[i][1];
		}

	}
	//*for girl
	for (int i = 0; i < n; i++) {

		if (counts[i][2] > girlmax) {
			girlmax = counts[i][2];
		}
	}

	//*printing taxi
	//*Here we push all the names whos values are equal to taxi
	vector<string> taxis;
	cout << "If you want to call a taxi, you should call: ";
	for (int i = 0; i < n; i++) {
		if (counts[i][0] == taximax) {
			taxis.push_back(names[i]);
		}
		else {
			continue;
		}


	}
	//*We will print from the taxis vector all the names
	for (int i = 0; i < taxis.size(); i++) {
		if (i == 0) {
			cout << taxis[i];
		} else {
			cout << ", " << taxis[i];
		}

	}
	cout << "." << endl;

	//*printing pizzas
	//*Here we will put all the max pizza names in pizzas vector
	vector<string> pizzas;
	cout << "If you want to order a pizza, you should call: ";
	for (int i = 0; i < n; i++) {
		if (counts[i][1] == pizzamax) {
			pizzas.push_back(names[i]);
		}
		else {
			continue;
		}


	}
	//*printing the names pizzas vector
	for (int i = 0; i < pizzas.size(); i++) {
		if (i == 0) {
			cout << pizzas[i];
		} else {
			cout << ", " << pizzas[i];
		}

	}
	cout << "." << endl;

	//*printing cafe girls
	//*here we will put all the max girl names in girls vector
	vector<string> girls;
	cout << "If you want to go to a cafe with a wonderful girl, you should call: ";
	for (int i = 0; i < n; i++) {
		if (counts[i][2] == girlmax) {
			girls.push_back(names[i]);
		}
		else {
			continue;
		}


	}
	//*printing the names we pushed in girls vector
	for (int i = 0; i < girls.size(); i++) {
		if (i == 0) {
			cout << girls[i];
		} else {
			cout << ", " << girls[i];
		}

	}
	cout << "." << endl;



}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();

	return 0;


}
