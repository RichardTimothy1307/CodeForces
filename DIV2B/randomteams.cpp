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

	ll  n, m;
	cin >> n >> m;
	ll new_n_max = n;
	ll maxi = n - ((m - 1));


	vector<ll> v1;
	ll k_max;
	ll k_min = 0;
	k_max = maxi * ((maxi - 1)) / 2;
	ll first = (n / m);
	ll rem = (n % m);
	//Now example 5 and 3 groups   5%3=2   1 1 1 => rem*(first+1)[2 2] 1->n/m so exactly remainder no of cases
	//has been added with remaining will be first initial cases - rem cases
	//remainder number of cases will be added with 1  //m(position)-rem cases will remain n/m
	k_min = rem * (first + 1) * (first) / 2 + (m - rem) * (first) * (first - 1) / 2;
	cout << k_min << " " << k_max << endl;

	return 0;
}