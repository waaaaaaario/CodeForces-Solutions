// Problem: A. Helpful Maths
// Contest: Codeforces - Codeforces Round 197 (Div. 2)
// URL: https://codeforces.com/problemset/problem/339/A
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
    string x;
    cin >>x ;
    vector<char> num;
    for (char c:x){
    	if (c != '+')
    	num.push_back(c);
    }
    sort(num.begin(), num.end());
    for (int i = 0; i < num.size(); ++i){
    	cout << num[i];
    	if (i<num.size() -1)
    	cout<< "+";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
