#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/TriangleNumberCalculator.hpp"

TEST_CASE("computes correct triangular numbers") {
    TriangleNumberCalculator calc;

    REQUIRE(calc.value(1) == 1);
    REQUIRE(calc.value(2) == 3);
    REQUIRE(calc.value(3) == 6);
    REQUIRE(calc.value(4) == 10);
}

TEST_CASE("adds two triangular numbers") {
    TriangleNumberCalculator calc;

    REQUIRE(calc.add(1, 1) == 2);
    REQUIRE(calc.add(2, 3) == 9);
    REQUIRE(calc.add(4, 2) == 13);
}

TEST_CASE("subtracts triangular numbers") {
    TriangleNumberCalculator calc;

    REQUIRE(calc.subtract(1, 1) == 0);
    REQUIRE(calc.subtract(2, 3) == -3);
    REQUIRE(calc.subtract(4, 2) == 7);
}
