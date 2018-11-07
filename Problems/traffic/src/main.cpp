#include "traffic.h"
#include<iostream>
#include<string>
using namespace std;
 
int main()
{
  // Your driver code can go here !!!
	int t;
	cin >> t;
	int counts[100];
        for(int i=0;i<t;i++)
        {
            cin>>x;
            cin>>g;
            cin>>y;
            cin>>r;
            counts[i]= GetColor(x,g,y,r);
        }
	for (int i = 0;i < t;i++)
	{
		cout << counts[i] << endl;
	}
  return 0;
}
