#include<bits/stdc++.h>
using namespace std;
#define ll long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair
//long long mod = 1e6 + 3;

//*Cycle property of mod used here 

int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	cin >> n >> k;
	int a[n + 10];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = k + 1; i <= n ; i++) {      //*Assume k=5 so take first 5 element and cycle through after k the values will start repeating 
		a[i] += a[i - k];   //*Adding the previous i-k values 
	}

	/*for (int i = 1; i < n + 1; i++) {
		cout << a[i] << " ";
	}*/

	int val = (int)1e9;
	int index = n;
	for (int i = n; i > n - k; i--) {
		cout << i << endl;
		if (a[i] <= val) {     //*Since we know first k elements are start point we wont go till there after k aur sum will be stored 
			val = a[i];
			index = i;
		}
	}
	index = index % k;
	if (index == 0) {
		index = k;
	}
	cout << index << endl;


	return 0;

}
