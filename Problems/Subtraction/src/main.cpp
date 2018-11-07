#include "subtraction.h"
#include<iostream>
using namespace std;

int main()
{
  // Your driver code can go here !!!
	std::vector<int> sequence;
	int t;
	int n; 
	int num;
	int subs[100];
	cin >> t;
	for (int i = 0;i < t;i++) 
	{
		cin >> n;
		for (int j = 0; j < n;j++)
		{
			cin >> num;
			sequence.push_back(num);
		}
		subs[i] = Subtraction::GetMaxNumber(sequence);

	}
	for (int i = 0; i < t; i++)
		cout << subs[i] << endl;
	cin >> num;

  return 0;
}