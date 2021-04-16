#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "grasplib.h"

#include <doctest/doctest.h>

using namespace grasp3d;

SCENARIO("Implementation shoud proceed successfully") {
  GIVEN("An implementation") {
    // WRITE here your implemented object
    grasolib grasp_test{};
    WHEN("it is called correctly") {
      // WRITE here something
      auto return_code = grasolib.print("test print function");
      THEN("The return code should indicate success") {
        REQUIRE(return_code == 0);
      }
    }
    AND_WHEN("its is called badly") {
      auto return_code = grasolib.print("");
      THEN("The return code should indicate failure") {
        REQUIRE(return_code == 1);
      }
    }
  }
}

#ifdef WITH_OPENSSL
SCENARIO("Implementation with OpenSSL shoud proceed successfully") {
  GIVEN("An implementation") {
    // WRITE here your implemented object
    hellolib hello{};
    WHEN("it is called correctly") {
      // WRITE here something
      auto return_code = hello.saySomethingHashed("I love BDD");
      THEN("The return code should indicate success") {
        REQUIRE(return_code == 0);
      }
    }
    AND_WHEN("its is called badly") {
      auto return_code = hello.saySomethingHashed("");
      THEN("The return code should indicate failure") {
        REQUIRE(return_code > 0);
      }
    }
  }
}
#endif