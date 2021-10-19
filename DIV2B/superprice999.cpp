#include<bits/stdc++.h>
using namespace std;
#define int long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair



void solve() {

	int p, d;
	cin >> p >> d;
	if (d == 0) {
		cout << p << endl;
		return;
	}
    //*converted to string for indexing 
	string p_1 = to_string(p); 
	string d_1 = to_string(d);
	int a[p_1.size()];
	int b[d_1.size()];
	for (int i = 0; i < p_1.size(); i++) {
		a[i] = p_1[i] - 48;
	}
	for (int i = 0; i < d_1.size(); i++) {
		b[i] = d_1[i] - 48;
	}
	int prev_count_9 = 0;    //!first count the previous trailing 9's if after calculation these are greater we will print this 
	for (int i = p_1.size() - 1; i >= 0; i--) {
		if (p_1[i] != '9') {
			break;
		}
		prev_count_9++;
	}
	int last_digits = (p_1.size() - 1) - (d_1.size() - 1);  //! Now this will check the last digits with respect to d
	//cout << last_digits << endl;
	int eq_number = 0;
	for (int i = last_digits; i < p_1.size(); i++) {  //! If there are 3 digits in d we calculate the last 3 digits in p 
		eq_number = (eq_number * 10) + a[i];
	}
	//cout << eq_number << endl;

    //! say we have 1112  and d as 200 so 112 we subtract from p we get 1000 and again we subtract 1 we get 1999 
    //! That is why we add one to the eqivalent last number and check  
	if (d >= eq_number + 1) {
		for (int i = last_digits; i < p_1.size(); i++) {
			a[i] = 0;
		}
        //TODO: If yes then we will make that numbers first zero like 1112 to 1000 and next we convert to 9 and subtract 1 from the prev digit 
        //TODO: Like in general subtraction  100-1 = 99 and 200-1 = 199 we are simulating this 
		int k = last_digits - 1; 
		if (a[last_digits - 1] == 0) {

			while (k >= 0 and a[k] == 0) {
				a[k] = 9;
				k--;
			}
		}
		a[k] = a[k] - 1;  //! k will be the first number before the zeroes 
		for (int i = last_digits; i < p_1.size(); i++) {
			a[i] = 9;
		}
	}
    //TODO: The other condition will be 1112 and d=100 we cant make 1000 since 112>100 we will take one digit less 1100 and 1099
	else {
		for (int i = last_digits + 1; i < p_1.size(); i++) {
			a[i] = 0;
		}


		for (int i = last_digits + 1; i < p_1.size(); i++) {
			a[i] = 9;
		}
		a[last_digits ] = a[last_digits ] - 1;

        //!edge case if it was 119 and 10 it will generally take 9 and make it 8 so we need to revert back since trailing 9's
		if (a[p_1.size() - 1] == 8) {
			a[p_1.size() - 1] = 9;
		}
	}

    //TODO: Take the start removing the leading zeroes
	int start = 0;
	for (int i = 0; i < p_1.size(); i++) {
		if (a[i] != 0) {
			start = i;
			break;
		}
	}
	//!here if the d is less than eqnumber+1 there might be condition where 9 wont come 1
	if (a[p_1.size() - 1] != 9) {
		cout << p << endl;
		return;
	}
	int count_9 = 0;
	for (int i = p_1.size() - 1; i >= start ; i--) {
		if (a[i] != 9) {
			break;
		}
		count_9++;
	}
	//cout << count_9 << prev_count_9 << endl;
    //!checking with the prev trailing 9s
	if (prev_count_9 >= count_9) {
		cout << p << endl;
		return;
	}
	for (int i = start; i < p_1.size(); i++) {
		cout << a[i];
	}
	cout << endl;

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
