#include "gears.h"
#include<iostream>
using namespace std;
int main()
{
  // Your driver code can go here !!!
	int t, n;
	std::vector <int> pins;
	int pairs[100];
	cin >> t;
	for (int i = 0;i < t;i++)
	{
		cin >> n;
		for (int j = 0;j < n;j++)
		{
			cin >> pins[j];
		}
		pairs[i] = Gears::GetNumberOfDistinctPairs(pins);
	}
	for (int i = 0;i < t;i++)
		cout << pairs[i] << endl;
  return 0;
}
