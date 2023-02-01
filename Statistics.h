#ifndef STATISTICS_H
#define STATISTICS_H

#include "Sequence.h"

class Statistics {
 public:
  // Default constructor
  Statistics();
  
  // Copy constructor
  Statistics(const Statistics& stats);
  
  // Destructor
  ~Statistics();
  
  // Accessor functions
  int getCount();
  int getValue(int index);
  
  // Computational functions
  void addValue(int value);
  int mean();
  int median();
  
 private:
  int count;
  int* values;
};

#endif // STATISTICS_H
