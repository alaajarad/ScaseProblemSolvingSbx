#include <fstream>
#include <iostream>

#include "TrafficLights.h"

TEST(TrafficLights, TrafficLights)
{
	std::ifstream inf("TrafficLights.in");
	std::ifstream outf("TrafficLights.out");
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
		int driverTime;
		inf >> driverTime;
		
		int greenLightTime;
		inf >> greenLightTime;

		int yellowLightTime;
		inf >> yellowLightTime;

		int redLightTime;
		inf >> redLightTime;

		std::string expectedAnswer;
		outf >> expectedAnswer;

		clock_t start = std::clock();
		std::string res = TrafficLights::GetLightColor(driverTime, greenLightTime, yellowLightTime, redLightTime);
		EXPECT_STREQ(res.c_str(), expectedAnswer.c_str());

		//calculate the maximum time used for a test case
		clock_t end = std::clock();
		clock_t timeUsed = 1000.0 * (end - start) / CLOCKS_PER_SEC;
		maxTimeUsed = std::max(timeUsed, maxTimeUsed);
	}
	std::cout << "Maximum time required for a test case " << maxTimeUsed << " ms\n";
}
