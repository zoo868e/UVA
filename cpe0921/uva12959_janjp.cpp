#include"bits/stdc++.h"
using namespace std;

void solve(){
	int j, r;
	while (cin >> j >> r){
		if(j == 0 || r == 0)break;
		const int NUM = j * r;
		int a[j], t;
		memset(a, 0, sizeof(a));
		for (int i = 0;i < NUM;i++){
			cin >> t;
			a[i % j] += t;
		}
		int max_score = a[0], max_id = 0;
		for (int i = 1;i < j;i++){
			if (a[i] >= max_score){
				max_id = i;
				max_score = a[i];
			}
		}
		cout << max_id + 1 << endl;
	}
}

int main(){
	solve();
	return 0;
}

