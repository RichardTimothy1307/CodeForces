#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,avx,avx2")

#include<bits/stdc++.h>
using namespace std;
#define int long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair
const int mod = 1e9 + 7;
//vector<int> graph[(int)1000];  //defining array of vectors


int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

int gcdall(vector<int> arr, int n)
{
	int result = arr[0];
	for (int i = 1; i < n; i++)
	{
		result = gcd(arr[i], result);

		if (result == 1)
		{
			return 1;
		}
	}
	return result;
}


void solve() {

	vector<int> evens;
	vector<int> odds;

	int n;
	cin >> n;

	int a[n];
	for (auto &it : a)cin >> it;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			evens.push_back(a[i]);
		}
		else {
			odds.push_back(a[i]);
		}
	}



	if (n == 2) {
		if (a[0] % a[1] != 0) {
			cout << a[1] << endl;
			return;
		}
		else if (a[1] % a[0] != 0) {
			cout << a[0] << endl;
			return;
		}
		else {
			cout << 0 << endl;
			return;
		}
	}


	int even_gcd = gcdall(evens, evens.size());
	int odd_gcd = gcdall(odds, odds.size());

	if (even_gcd == odd_gcd) {
		cout << 0 << endl;
		return;
	}
	else {
		bool flag = true;
		int ans;
		for (int i = 1; i < n; i += 2) {
			if (a[i] % even_gcd != 0) {
				ans = even_gcd;
				flag = true;
			}
			else {
				flag = false;
				ans = 0;
				break;
			}
		}
		if (flag == false ) {
			for (int i = 0; i < n; i += 2) {
				if (a[i] % odd_gcd != 0) {
					ans = odd_gcd;
					flag = true;
				}
				else {
					flag = false;
					ans = 0;
					break;
				}
			}
		}

		cout << ans << endl;

	}

}









signed main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;


}