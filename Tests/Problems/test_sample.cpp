#include <fstream>
#include <iostream>
#include <ctime>
#include "sample.h"

TEST(Sample, Sample)
{
  std::ifstream inf("sample.in");
  std::ifstream outf("sample.out");
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
    int lhs, rhs;
    inf >> lhs >> rhs;
    int expectedAnswer;
    outf >> expectedAnswer;
	//time 
	int start_s = clock();
    EXPECT_EQ(Sample::AddNumbers(lhs, rhs), expectedAnswer);
	int stop_s = clock();
	 executionTime = (stop_s - start_s) / double(CLOCKS_PER_SEC) * 1000;
	 maxExecutionTime = std::max(maxExecutionTime, executionTime);
	

	//end
  }
  std::cout << " The longest execution time for tests in ms is :  " << maxExecutionTime <<"\n";
}
