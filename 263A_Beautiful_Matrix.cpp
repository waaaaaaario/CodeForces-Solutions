// Problem: A. Beautiful Matrix
// Contest: Codeforces - Codeforces Round 161 (Div. 2)
// URL: https://codeforces.com/problemset/problem/263/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <utility>

using namespace std;
using ll = long long;
using ld = long double;
using pii = pair<int, int>;

void solve() {
    int x;
    for (int i = 1; i <= 5; ++i) {
    	for (int j = 1; j <= 5; ++j) {
    		cin >> x;
    		if (x==1){
    			cout << abs(i-3) + abs(j-3) << endl;
    		}
    	}
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
