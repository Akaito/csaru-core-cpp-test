#include <csaru-core-cpp/csaru-core-cpp.h> // ref()

#include "TestCase0.hpp"
#include "TestCase2_0.hpp"
#include "TestCase2_1.hpp"

int main (int argc, char ** argv) {

    ref(argc);
    ref(argv);

    // test DataMap
    TestCase0();

    // test JsonParser
    TestCase2_0();
    TestCase2_1();

    return 0;

}
