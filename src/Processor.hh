#ifndef PROCESSOR_HH
#define PROCESSOR_HH

class Processor {
  private:
    float sum;
    long  count;
  public:
    Processor(void);
    void putValue(float);
    void printResult(void);
};

#endif // PROCESSOR_HH
