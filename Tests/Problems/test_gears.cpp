#include <fstream>
#include <iostream>
#include <ctime>
#include <ratio>
#include <chrono>
#include <string>
#include "gears.h"

TEST(Subtraction, Subtraction)
{

	using namespace std::chrono;
  std::ifstream inf("gears.in");
  std::ifstream outf("gears.out");
  if (!inf.is_open() || !outf.is_open())
  {
    FAIL() << "Error opening test file";
  }
  int numberOfTestCases;
  inf >> numberOfTestCases;
  high_resolution_clock::time_point start = high_resolution_clock::now();
  int nOfGears;
    inf >> nOfGears;
	std::vector<int> gears;
	
		for (int k = 0; k < nOfGears; k++)
		{
			int teeth;
			inf >> teeth;
			gears.push_back(teeth);
			
		}

		int expectedAnswer;
		outf >> expectedAnswer;
		EXPECT_EQ(Gears::GetNumberOfDistinctPairs(gears), expectedAnswer);
		high_resolution_clock::time_point end = high_resolution_clock::now();

        duration<double, std::milli> time_span = end - start;

  for (int i = 1; i < numberOfTestCases; i++)
  {
	  start = high_resolution_clock::now();
    int nOfGears;
    inf >> nOfGears;
    std::vector<int> gears;
	

    for (int k = 0; k < nOfGears; k++)
    {
		
      int teeth;
      inf >> teeth;
	
      gears.push_back(teeth);
    }

    outf >> expectedAnswer;
    EXPECT_EQ(Gears::GetNumberOfDistinctPairs(gears), expectedAnswer);
	end = high_resolution_clock::now();
	if (time_span<(end - start))
		time_span = end - start;
  }
  std::cout << time_span.count();
  std::cout << std::endl;
}