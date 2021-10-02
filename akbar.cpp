#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+1;
vector<int> adj[N];
vector<bool> visited(N,false);

void solve() {
	int n, r, m;
	cin >> n >> r >> m;
	int x, y;
	for(int i = 0; i < r; i++) {
		cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	int pos, str;
	

}

int main() {
	int t;
	cin >> t;
	while(t--)
		solve();
}