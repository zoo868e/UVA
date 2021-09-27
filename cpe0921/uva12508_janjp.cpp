#include"bits/stdc++.h"
using namespace std;
#define ll long long int

ll n, m, A, B;

ll solve(ll limit){
	ll ret = 0;
	limit = limit >= 0 ? limit:0;
	if (n > m)
		swap(n, m);
	for (ll i = 1; i <= n; i++){
		for (ll j = 1; j <= m; j++){
			ll cnt = 0;
			// 1. 兩點在一條邊上
			if (i * j <= limit)
				cnt += 2 * (i + j - 2);
			// 2. 以對角線為三角形的一條邊
			ll l, r;
			for (ll x = 0; x <= i; x++){
				r = (j * x + limit) / i;
				if (r > j)
					r = j;
				ll t = j * x - limit;
				if (t <= 0)
					l = 0;
				else
					l = (t - 1) / i + 1;
				if (l <= r)
					cnt += 2 * (r - l + 1);
			}
			// 3. 一點在頂點，另外兩點在對應得邊上
			for (ll x = 1; x < i; x++){
				ll tmp = i * j - x;
				if (tmp <= limit)
					cnt += 4 * (j - 1);
				else {
					tmp = tmp - limit;
					ll u = j - 1 - min(tmp / x + (tmp % x != 0), j - 1);
					cnt += 4 * u;
				}
			}
			ret += cnt * (n - i + 1) * (m - j + 1);
		}
	}
	return ret;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		cin >> n >> m >> A >> B;
		cout << solve(B * 2) - solve(A * 2 - 1) << endl;
	}
	return 0;
}

