#include<bits/stdc++.h>
using namespace std;
#define ll long long
//double pi = 3.1415926536;
#define  PB push_back
#define  MP make_pair
//long long mod = 1e6 + 3;




int main() {
#ifndef ONLINE_JUDGE
	freopen("ccallinput.txt", "r", stdin);
	freopen("ccalloutput.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	//0 0
	//2 5    (0+2)+5 =7
	//3 1    (3+2) or 7  -> 7+1=8
	//5 3    (5+3+2) or 8  -> 10+3=13
	//10 1    (10+5+3+2) or 13 -> 20+1=21
	int n, m;
	cin >> n >> m;
	int last[6] = {0}; //max size is 5
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= m; j++) {
			int t;
			cin >> t;
			//cout << t << endl;
			//cout << last[j] << " " << last[j - 1] << endl;
			int time = max(last[j], last[j - 1]); //comparison with 1st's all previous value addition and the previous pair completion time
			time += t;
			//cout << time << endl;
			last[j] = time; //that means the for first case 2 5 it will
			//become 7 now 3 1 will come 3 will start at 3+2=5
			//but 2nd cannot start at 5 since it completes at 7 so 7+1=8
		}
		cout << last[m] << " ";
	}
	cout << endl;




	return 0;

}
