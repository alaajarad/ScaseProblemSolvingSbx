#include <cstring>
#include <iostream>
#include <string>
#include <string.h>

#include "traffic_lights.h"


using namespace std;


int main()
{
        // Driver code.

        int t;
        scanf("%d", &t);
        for (int test = 0; test < t; ++test)
        {
                int x, g, y, r;
                scanf("%d %d %d %d", &x, &g, &y, &r);
                string result = Traffic_Lights::GetTheAnswer(x, g, y, r);
                cout << result << endl;
        }
        return 0;
}
