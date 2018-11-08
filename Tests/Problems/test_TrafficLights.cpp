#include "TrafficLights.h"
#include <fstream>
#include <iostream>
#include <ctime>
#include <ratio>
#include <chrono>
#include <string>



using namespace std::chrono;

TEST(Substraction, Substraction)
{
	using namespace std::chrono;
  std::ifstream inf("TrafficLights.in");
  std::ifstream outf("TrafficLights.out");
if (!inf.is_open() || !outf.is_open())
  {
    FAIL() << "Error opening test file";
  }
  int numberOfTestCases;
  inf >> numberOfTestCases;
  
  int x,g,y,r;
  inf>> x;
  inf>>g;
  inf>>y;
  inf>>r;
  std::string expectedAnswer;
  outf >> expectedAnswer;
   high_resolution_clock::time_point start = high_resolution_clock::now();
  EXPECT_STREQ(TrafficLights::GetStatus( x, g,  y, r).c_str(), expectedAnswer.c_str());
  high_resolution_clock::time_point end = high_resolution_clock::now() ;
  duration<double, std::milli> time_span = end- start;


  for (int i = 1; i < numberOfTestCases; i++)
    {

	start = high_resolution_clock::now();
	EXPECT_STREQ(TrafficLights::GetStatus(x, g, y, r).c_str(), expectedAnswer.c_str());
	end = high_resolution_clock::now();
	 

    if (time_span<(end-start))
	 time_span=end-start;
    }
  std::cout << time_span.count();
  std::cout << std::endl;


 //std::cout<<("It took  "+ time_span.count() + " MilliSeconds");

  }


