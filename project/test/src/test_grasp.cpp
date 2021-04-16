#include "grasplib.h"

using namespace grasp3d;

int main() {
  grasplib test_grasp3d{};
  int32_t error_code = test_grasp3d.print("Hello Modern C++ Development");
  if (error_code > 0) {
    return error_code;
  }
  return 0;
}
