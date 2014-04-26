#include "Parser.hh"

#include <iostream>

Parser::Parser(std::istream &s):s(s)
{
}

float Parser::getValue(void)
{
  float value;
  this->s >> value;
  return value;
}

// eof
