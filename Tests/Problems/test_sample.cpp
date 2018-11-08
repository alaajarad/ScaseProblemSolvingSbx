#include <fstream>
#include <iostream>
#include <ctime>
#include <ratio>
#include <chrono>
#include <string>

using namespace std::chrono;

#include "sample.h"

TEST(Sample, Sample)
{
  std::ifstream inf("sample.in");
  std::ifstream outf("sample.out");
  if (!inf.is_open() || !outf.is_open())
  {
    FAIL() << "Error opening test file";
  }
  int numberOfTestCases;
  inf >> numberOfTestCases;
  high_resolution_clock::time_point start = high_resolution_clock::now();
  int lhs, rhs;
  inf >> lhs >> rhs;
  int expectedAnswer;
  outf >> expectedAnswer;
  EXPECT_EQ(Sample::AddNumbers(lhs, rhs), expectedAnswer);
  high_resolution_clock::time_point end = high_resolution_clock::now();
  duration<double, std::milli> time_span = end - start;
  for (int i = 1; i < numberOfTestCases; i++)
  {
    end = high_resolution_clock::now();
    int lhs, rhs;
    inf >> lhs >> rhs;
    int expectedAnswer;
    outf >> expectedAnswer;
    EXPECT_EQ(Sample::AddNumbers(lhs, rhs), expectedAnswer);
	end = high_resolution_clock::now();


	if (time_span<(end - start))
		time_span = end - start;

  }
  std::cout << time_span.count();
  std::cout << std::endl;
}
