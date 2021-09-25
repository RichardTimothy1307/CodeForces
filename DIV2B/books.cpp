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
	int n, t;
	cin >> n >> t;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int l = 0;  //we will start with 3 1 2 1  here 5 is t and if reach 3+1+2 >5 then we eliminate t and move forward
	int r = 0;
	int ans = 0;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (sum + a[i] > t) {
			while (l < i and sum + a[i] > t) //st aage jayega and st+a[i] jabtak bada hai tab tak minus karege a[st] se
			{
				sum -= a[l];
				l++;
			}
		}
		//adding the ith element
		sum += a[i];
		if (sum <= t) { //for every window we will calculate
			ans = max(ans, i - l + 1); //i is the ahead one and st the back one
		}
	}
	cout << ans << endl;


	return 0;
}