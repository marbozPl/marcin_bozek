#ifndef SEQUENCE_H
#define SEQUENCE_H

class Sequence {
 public:
  // Default constructor
  Sequence();
  
  // Copy constructor
  Sequence(const Sequence& seq);
  
  // Destructor
  ~Sequence();
  
  // Accessor functions
  int getLength();
  int getValue(int index);
  
  // Computational functions
  void setValue(int index, int value);
  int sum();
  
 private:
  int length;
  int* values;
};

#endif // SEQUENCE_H
