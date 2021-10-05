#include<bits/stdc++.h>
using namespace std;
#define ll long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair




void solve() {
	int v;
	cin >> v;
	if (v == 0) {
		cout << -1 << endl;
		return;
	}
	int a[10];
	for (int i = 1; i < 10; i++) {
		cin >> a[i];
	}
	vector<int> ans;
	//vector<int> ans1;
	int mini = (int)1e9;
	int index = 1;
	int total_rems = 0;
	for (int i = 1; i < 10; i++) {

		if (mini >= a[i]) {
			mini = a[i];
			index = i;
		}

	}
	int len = v / mini;
	int rem = v % mini;

	bool flag = true;
	while (flag) {
		flag = false;
		for (int i = 9; i > index; i--) {
			if (rem + mini >= a[i]) {
				//here instead one value we are taking different values to maximize say x+rem>=number we will take this minimum number and rem-number-x
				ans.push_back(i);
				rem -= (a[i] - mini);
				len--;
				flag = true;
				break; //to start again from 9 because we dont know if 9 will work again
			}
		}






	}
	//now we have balanced the remainder by adding numbers all that is left is to add mini
	//for the length left
	for (int i = 0; i < len; i++) {
		ans.push_back(index);
	}

	if (len == 0) {
		cout << -1 << endl;
	} else {
		for (auto it : ans) {
			cout << it;
		}
		cout << endl;
	}



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
