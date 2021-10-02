#include <bits/stdc++.h>
using namespace std;
int main() {
	int n; // number of activity
	cin >> n;
	vector<vector<int>> v;
	int start, end;
	for(int i = 0; i < n; i++) {
		cin >> start >> end;
		v.push_back({start, end});
	}
	sort(v.begin(), v.end(), [&](vector<int> &a, vector<int> &b){
		return a[1] < b[1]; // learn more about custom operators
	});
	int count = 1; // first activity is selected
	int etime = v[0][1];
	for(int i = 1; i < n; i++) {
		if(v[i][0] > etime) { // start time of next activity is strictly greater than end time of current activity
			count++;
			etime = v[i][1];
		}
	}
	cout << count << '\n';
}
