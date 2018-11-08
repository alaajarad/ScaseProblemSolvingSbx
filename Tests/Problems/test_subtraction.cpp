#include "subtraction.h"
#include <fstream>
#include <iostream>
#include <ctime>
#include <ratio>
#include <chrono>
#include <string>


TEST(Subtraction, Subtraction)
{
	using namespace std::chrono;
  std::ifstream inf("subtraction.in");
  std::ifstream outf("subtraction.out");
  if (!inf.is_open() || !outf.is_open())
  {
    FAIL() << "Error opening test file";
  }
  int numberOfTestCases;
  inf >> numberOfTestCases;
  high_resolution_clock::time_point start = high_resolution_clock::now();
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
  EXPECT_EQ(Subtraction::GetMaxNumber(sequence), expectedAnswer);
  high_resolution_clock::time_point end = high_resolution_clock::now();
  duration<double, std::milli> time_span = end - start;

  for (int i = 1; i < numberOfTestCases; i++)
  {
	  start = high_resolution_clock::now();
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
    EXPECT_EQ(Subtraction::GetMaxNumber(sequence), expectedAnswer);
	end = high_resolution_clock::now();
	if (time_span<(end - start))
		time_span = end - start;
  }
  std::cout << time_span.count();
  std::cout << std::endl;
}