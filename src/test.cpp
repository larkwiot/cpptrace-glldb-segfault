#include <cpptrace/cpptrace.hpp>
#include <catch2/catch_all.hpp>

TEST_CASE("some test")
{
    throw cpptrace::logic_error("exception, your honor!");
}
