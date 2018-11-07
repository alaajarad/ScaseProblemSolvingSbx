#include "gears.h"
#include<iostream>
using namespace std;
 
int main()
{
  // Your driver code can go here !!!
	int t;
	cin >> t;
	int counts[100];
	for (int i = 0; i < t; i++)
	{
		int n,x;
		cin >> n;
		std::vector<int> pins;
		for (int j = 0; j < n;j++)
		{
			cin >> x;
			pins.push_back(x);
		}
		counts[i] = Gears::GetNumberOfDistinctPairs(pins);

	}
	for (int i = 0;i < t;i++)
	{
		cout << counts[i] << endl;
	}
  return 0;
}