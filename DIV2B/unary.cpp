#include<bits/stdc++.h>
using namespace std;
#define ll long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair
long long mod = 1e6 + 3;

ll powerof2(int a, int n) {
	if (n == 0) {
		return 1;
	}
	if (n % 2 != 0) {
		return (a * powerof2(a, n / 2) * powerof2(a, n / 2)) % mod;
	}
	return (powerof2(a, n / 2) * powerof2(a, n / 2)) % mod;
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	string s1 = "";
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '>') {
			s1 += "1000";
		} else if (s[i] == '<') {
			s1 += "1001";
		} if (s[i] == '+') {
			s1 += "1010";
		} if (s[i] == '-') {
			s1 += "1011";
		} if (s[i] == '.') {
			s1 += "1100";
		} if (s[i] == ',') {
			s1 += "1101";
		} if (s[i] == '[') {
			s1 += "1110";
		} if (s[i] == ']') {
			s1 += "1111";
		}
	}
	int number = 0;
	int x = s1.size() - 1;
	for (int i = 0; i < s1.size(); i++) {
		if (s1[i] == '1') {
			number += (1 * powerof2(2, x - i));
		} else {
			//
		}
	}
	cout << (number) % mod << endl;


	return 0;

}