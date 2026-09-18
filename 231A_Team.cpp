#include <iostream>
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >>n;
	int num_solved = 0;
	for (int i = 0; i<n; i++)
	{
		int Petya, Vasya, Tonya;
		cin >> Petya >> Vasya >> Tonya;
		if (Petya + Tonya + Vasya >= 2)
		num_solved++;
	}
	cout << num_solved << "\n";
	return 0;
}