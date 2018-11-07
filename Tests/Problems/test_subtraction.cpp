#include <fstream>
#include <iostream>

#include "subtraction.h"

TEST(Subtraction, Subtraction)
{
  std::ifstream inf("subtraction.in");
  std::ifstream outf("subtraction.out");
  int max1 =0;
  if (!inf.is_open() || !outf.is_open())
  {
    FAIL() << "Error opening test file";
  }
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
    int start = clock();
    EXPECT_EQ(Subtraction::GetMaxNumber(sequence), expectedAnswer);
    int stop = clock();
    int elapsedTime = (stop-start)/double(CLOCKS_PER_SEC)*1000;
   max1 = std::max (max1,elapsedTime);
  }
  std::cout<<"maximum elapsed time is : "<< max1;
}
