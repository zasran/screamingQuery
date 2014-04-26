#ifndef PARSER_HH
#define PARSER_HH

#include <istream>

class Parser {
  private:
    std::istream &s;
  public:
    Parser(std::istream &s);
    bool done(void) { return this->s.eof() && this->s.fail(); };
    float getValue(void);
};

#endif // PARSER_HH
