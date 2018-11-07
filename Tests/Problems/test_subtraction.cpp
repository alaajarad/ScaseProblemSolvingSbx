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
  int numberOfTestCases;
  inf >> numberOfTestCases;

  // maximum time use for a test case
  clock_t maxTimeUsed = 0.0;

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

	clock_t start = std::clock();

    EXPECT_EQ(Subtraction::GetMaxNumber(sequence), expectedAnswer);

	//calculate the maximum time used for a test case
	clock_t end = std::clock();
	clock_t timeUsed = 1000.0 * (end - start) / CLOCKS_PER_SEC;
	maxTimeUsed = std::max(timeUsed, maxTimeUsed);
  }
  std::cout << "Maximum time required for a test case " << maxTimeUsed << " ms\n";
}