#include "Sequence.h"

Sequence::Sequence() : length(0), values(nullptr) {}

Sequence::Sequence(const Sequence& seq) {
  length = seq.length;
  values = new int[length];
  for (int i = 0; i < length; i++) {
    values[i] = seq.values[i];
  }
}

Sequence::~Sequence() {
  delete[] values;
}

int Sequence::getLength() {
  return length;
}

int Sequence::getValue(int index) {
  return values[index];
}

void Sequence::setValue(int index, int value) {
  values[index] = value;
}

int Sequence::sum() {
  int total = 0;
  for (int i = 0; i < length; i++) {
    total += values[i];
  }
  return total;
}
