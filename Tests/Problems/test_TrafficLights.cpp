#include <fstream>
#include <iostream>

#include "TrafficLights.h"

TEST(Subtraction, Subtraction)
{
	std::ifstream inf("TrafficLights.in");
	std::ifstream outf("TrafficLights.out");
	if (!inf.is_open() || !outf.is_open())
	{
		FAIL() << "Error opening test file";
	}

	double MostConsuming = 0.0;

	int numberOfTestCases;
	inf >> numberOfTestCases;
	for (int i = 0; i < numberOfTestCases; i++)
	{
		long long int driver, green, yellow, red;
		inf >> driver >> green >> yellow >> red;

		std::string expectedAnswer;
		outf >> expectedAnswer;

		clock_t bgn = clock();
		std::string res = TrafficLights::GetColorOfTrafficLight(driver, green, yellow, red);
		EXPECT_STREQ(res.c_str(), expectedAnswer.c_str());

		clock_t end = clock();

		double elapsed_ = double(end - bgn) / CLOCKS_PER_SEC * 1000;

		MostConsuming = std::max(MostConsuming, elapsed_);

	}
	std::cout << "\n***The most time consuming test was: " << MostConsuming << " ms***\n\n";
}