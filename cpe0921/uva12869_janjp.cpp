#include"bits/stdc++.h"
using namespace std;


void solve(long long int l, long long int h){
	long long int ans = 1;
	l = l - l % 5;
	h = h - h % 5;
	ans += (h - l) / 5;
	cout << ans << endl;
}

int main(){
	long long int l, h;
	while (cin >> l >> h){
		if (l == 0 && h == 0)break;
		solve(l, h);
	}
	return 0;
}

