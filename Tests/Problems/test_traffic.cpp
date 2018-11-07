#include <fstream>
#include <iostream>

#include "traffic.h"

TEST(Traffic, Traffic)
{
  std::ifstream inf("traffic.in");
  std::ifstream outf("traffic.out");
  if (!inf.is_open() || !outf.is_open())
  {
    FAIL() << "Error opening test file";
  }
  int numberOfTestCases;
  inf >> numberOfTestCases;
  for (int i = 0; i < numberOfTestCases; i++)
  {
    int x;
    inf >> x;
   int g ;
   int y;
   int r;
   inf >> g;
   inf >> y;
   inf >> r;



 std::string  expectedAnswer;
    outf >> expectedAnswer;
    EXPECT_EQ(Traffic::GetColor(x,g,y,r), expectedAnswer);
  }
}
