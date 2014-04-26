#include "Processor.hh"

#include <iostream>

Processor::Processor():sum(0),count(0)
{
}

void Processor::putValue(const float v)
{
  this->sum += v;
  this->count++;
}

void Processor::printResult(void)
{
  float avg = this->count ? this->sum / this->count : 0;
  std::cout
    << "Result:\n"
    << "\tsum     [" << sum   << "]\n"
    << "\tcount   [" << count << "]\n"
    << "\taverage [" << avg   << "]\n";
  return;
}

// eof
