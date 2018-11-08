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
  double max1 =0;
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
    int start = clock();
    std :: string s =Traffic::GetColor(x,g,y,r);
    EXPECT_STREQ(s.c_str(), expectedAnswer.c_str());
    int stop = clock();
    double elapsedTime = (stop-start)/double(CLOCKS_PER_SEC)*1000;
    max1 = std::max(max1,elapsedTime);
  }
  std::cout<<"maximum execution time "<< max1 << std::endl;
}
