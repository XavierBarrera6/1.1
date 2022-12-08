
#define CATCH_CONFIG_MAIN 
                          
#include "activity.h"
#include "catch.h"

TEST_CASE("Testing sumaIterativa", "[sumaIterativa]") {
  REQUIRE(sumaIterativa(1) == 1);
  REQUIRE(sumaIterativa(10) == 55);
  REQUIRE(sumaIterativa(50) == 1275);
  REQUIRE(sumaIterativa(100) == 5050);
  REQUIRE(sumaIterativa(500) == 125250);
}

TEST_CASE("Testing sumaRecursiva", "[sumaRecursiva]") {
  REQUIRE(sumaRecursiva(1) == 1);
  REQUIRE(sumaRecursiva(10) == 55);
  REQUIRE(sumaRecursiva(50) == 1275);
  REQUIRE(sumaRecursiva(100) == 5050);
  REQUIRE(sumaRecursiva(500) == 125250);
}

TEST_CASE("Testing sumaDirecta", "[sumaDirecta]") {
  REQUIRE(sumaDirecta(1) == 1);
  REQUIRE(sumaDirecta(10) == 55);
  REQUIRE(sumaDirecta(50) == 1275);
  REQUIRE(sumaDirecta(100) == 5050);
  REQUIRE(sumaDirecta(500) == 125250);
}
