#include <config.h>
#include <iostream>
#include <sstream>

#include "Parser.hh"
#include "Processor.hh"
#include "Reader.hh"

int main(void)
{
  Parser parser(std::cin);
  Processor processor;
  Reader reader(parser, processor);

  reader.work();

  reader.printResult();

  return 0;
}

// eof
