#include"bits/stdc++.h"
using namespace std;

map<int, map<int, pair<int, int>>> forwards;
map<int, int> visited;

bool intime(int time_start, int duration, int target){
	return target >= time_start && target <= time_start + duration;
}

int dfs(int source, int call_time){
	if (visited[source])
		return 9999;
	visited[source]++;
	for (auto x:forwards[source]){
		if (intime(x.second.first, x.second.second, call_time))
			return dfs(x.first, call_time);
	}
	return source;
}

void solve(){
	int n, source, time_start, duration, target;
	cin >> n;
	cout << "CALL FORWARDING OUTPUT" << endl;
	for (int i = 1;i <= n;i++){
		forwards.clear();
		while (cin >> source){
			if (source == 0)
				break;
			cin >> time_start >> duration >> target;
			forwards[source][target] = pair<int, int>(time_start, duration);
		}
		cout << "SYSTEM " << i << endl;
		int call_time;
		while (cin >> call_time){
			if (call_time == 9000)
				break;
			cin >> source;
			visited.clear();
			int target = dfs(source, call_time);
			cout << "AT ";
			cout << setfill('0') << setw(4) << call_time << " ";
			cout << "CALL TO ";
			cout << setfill('0') << setw(4) << source << " ";
			cout << "RINGS ";
			cout << setfill('0') << setw(4) << target << endl;

		}
	}
	cout << "END OF OUTPUT" << endl;
}

int main(){
	solve();
	return 0;
}

