#include "ErrorHandle.h"

ErrorHandle::ErrorHandle(const std::string& message) : message_(message) {}

const char* ErrorHandle::what() const noexcept {
  return message_.c_str();
}