#include "Reader.hh"

#include "Parser.hh"
#include "Processor.hh"

Reader::Reader(Parser &parser, Processor &processor):
  parser(parser),
  processor(processor)
{
}

void Reader::work(void)
{
  for(float f = parser.getValue(); !parser.done(); f = parser.getValue()) {
    this->processor.putValue(f);
  }
}

void Reader::printResult(void)
{
  processor.printResult();
}

// eof
