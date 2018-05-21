#define CTEST_MAIN
#include "board.h"
#include "board_print.h"
#include "board_print_plain.h"
#include <ctest.h>

CTEST(Syntax, Correct) {
    int result = check_input("a2a4");
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(Syntax, Incorrect) {
    int result = check_input("a2a8");
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

int main(int argc, const char** argv) {
    return ctest_main(argc, argv);
}
