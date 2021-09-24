#include<bits/stdc++.h>
using namespace std;



int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	priority_queue<int> pq;
	int x1 = a + b + c; pq.push(x1);
	int x2 = a + b * c; pq.push(x2);
	int x3 = a * b + c; pq.push(x3);
	int x4 = (a + b) * c; pq.push(x4);
	int x5 = a * (b + c); pq.push(x5);
	int x6 = a * b * c; pq.push(x6);

	cout << pq.top() << endl;



	return 0;

}




















 