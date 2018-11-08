#include "subtraction.h"
#include<iostream>
using namespace std;

int main()
{
	int t, n;
	int sub[100];
	std::vector<int> num;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		for (int j = 0;j < n;j++)
		{
			cin >> num[j];
		}
		sub[i] = Subtraction::GetMaxNumber(num);
	}
	for (int i = 0;i < t;i++)
		cout << sub[i] << endl;

  return 0;
}