#include <fstream>
#include <iostream>

#include "subtraction.h"

TEST(Subtraction, Subtraction)
{
  std::ifstream inf("subtraction.in");
  std::ifstream outf("subtraction.out");
  if (!inf.is_open() || !outf.is_open())
  {
    FAIL() << "Error opening test file";
  }
  double maxExecutionTime = 0;
  double executionTime;
  int numberOfTestCases;
  inf >> numberOfTestCases;
  for (int i = 0; i < numberOfTestCases; i++)
  {
    int seqSize;
    inf >> seqSize;
    std::vector<int> sequence;
    for (int k = 0; k < seqSize; k++)
    {
      int num;
      inf >> num;
      sequence.push_back(num);
    }
    int expectedAnswer;
    outf >> expectedAnswer;
	int start_s = clock();
    EXPECT_EQ(Subtraction::GetMaxNumber(sequence), expectedAnswer);
	int stop_s = clock();
	executionTime = (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000;
	maxExecutionTime = std::max(maxExecutionTime, executionTime);
  }
  std::cout << " The longest execution time for tests in ms is :  " << maxExecutionTime << "\n";
}