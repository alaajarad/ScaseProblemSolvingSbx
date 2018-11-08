#include <fstream>
#include <iostream>
#include <string>
#include <cstring>
#include <string.h>
#include <ctime>
#include <cmath>

#include "traffic_lights.h"

TEST(TrafficLights, TrafficLights)
{
  std::ifstream inf("traffic_lights.in");
  std::ifstream outf("traffic_lights.out");
  if (!inf.is_open() || !outf.is_open())
  {
    FAIL() << "Error opening test file";
  }
  int numberOfTestCases;
  inf >> numberOfTestCases;
  double max_time = -1;
  for (int i = 0; i < numberOfTestCases; i++)
  {
      int x, g, y, r;
	  inf >> x >> g >> y >> r;
      std::string expectedAnswer;
      outf >> expectedAnswer;
      clock_t begin = clock();
      EXPECT_EQ(Traffic_Lights::GetTheAnswer(x, g, y, r), expectedAnswer);
      clock_t end = clock();
      double time = end - begin;
      max_time = std::max(max_time, time);
  }
  printf("Maximum time among all of the test cases: %lfms\n", max_time);
}
