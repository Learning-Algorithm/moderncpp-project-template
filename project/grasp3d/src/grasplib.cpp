#include "grasplib.h"

#include <iostream>

#ifdef WITH_OPENSSL
#include <openssl/sha.h>

#include <array>
#include <iomanip>
#include <sstream>
#endif

using namespace grasp3d;

int32_t grasplib::print(const std::string &log) const {
  if (log.empty()) {
    std::cerr << "No value passed\n";
    return 1;
  }

  std::cout << log << '\n';
  return 0;
}
