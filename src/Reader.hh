#ifndef READER_HH
#define READER_HH

class Parser;
class Processor;

class Reader {
  private:
    Parser    &parser;
    Processor &processor;
  public:
    Reader(Parser &parser, Processor &processor);
    void work(void);
    void printResult(void);
};

#endif // READER_HH
