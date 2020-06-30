#include <bits/stdc++.h>

using namespace std;

void solve() {
	int r, c, row[10] = {0}, col[10] = {0};
	cin >> r >> c;
	string s;
	for(int i = 0; i < r; i++){
		cin >> s;
		for(int j = 0; j < c; j++){
			if(s[j] == 'S'){
				row[i] = 1;
				col[j] = 1;
			}
		}
	}
	int cnt = 0;
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			if(row[i] == 0 || col[j] == 0){
				cnt++;
			}
		}
	}
	cout << cnt << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	solve();
	return 0;
}