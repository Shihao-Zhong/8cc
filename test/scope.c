#include "test.h"

void testmain(void) {
    print("scope");

    int a = 31;
    { int a = 64; }
    expect(31, a);
    {
        int a = 64;
        expect(64, a);
    }
}
