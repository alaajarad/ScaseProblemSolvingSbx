#include <fstream>
#include <iostream>

#include "traffic_lights.h"

TEST(traffic_lights, traffic_lights)
{
  std::ifstream inf("traffic_lights.in");
  std::ifstream outf("traffic_lights.out");
  if (!inf.is_open() || !outf.is_open())
  {
    FAIL() << "Error opening test file";
  }
  int numberOfTestCases;
  inf >> numberOfTestCases;
  for (int i = 0; i < numberOfTestCases; i++)
  {

    std::vector<int> sequence;
    for (int k = 0; k < 4; k++)
    {
      int num;
      inf >> num;
      sequence.push_back(num);
    }
    std:: string expectedAnswer;
    outf >> expectedAnswer;
	clock_t bgn = clock();
    EXPECT_EQ(traffic_lights::GetColor(sequence), expectedAnswer);
	clock_t end = clock();



		double elapsed_ = double(end - bgn) / CLOCKS_PER_SEC * 1000;



		MostConsuming = std::max(MostConsuming, elapsed_);
  }
  std::cout << "\n***The most time consuming test was: " << MostConsuming << " ms***\n\n";
}