#include <iostream>
#include <vector>
using namespace std;
 
int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	cin >> n >> k;
	vector<int> scores(n);
	for(int i = 0; i < n; i++)
	{
		cin >> scores[i];
	}
	int x = scores[k-1];
	int y = 0;
	for(int i = 0; i < n; i++)
	{
		if(scores[i]>= x && scores[i]>0)
		y++;
	}
	cout << y << "\n";
	return 0;
}