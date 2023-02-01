#include "Statistics.h"

Statistics::Statistics() : count(0), values(nullptr) {}

Statistics::Statistics(const Statistics& stats) {
  count = stats.count;
  values = new int[count];
  for (int i = 0; i < count; i++) {
    values[i] = stats.values[i];
  }
}

Statistics::~Statistics() {
  delete[] values;
}

int Statistics::getCount() {
  return count;
}

int Statistics::getValue(int index) {
  return values[index];
void Statistics::addValue(int value) {
  int* newValues = new int[count + 1];
  for (int i = 0; i < count; i++) {
    newValues[i] = values[i];
  }
  newValues[count] = value;
  delete[] values;
  values = newValues;
  count++;
}

int Statistics::mean() {
  int total = 0;
  for (int i = 0; i < count; i++) {
    total += values[i];
  }
  return total / count;
}

int Statistics::median() {
  // Sorting the values array
  // ...
  
  // Calculating the median value
  // ...
  
  return 0; // placeholder
}
