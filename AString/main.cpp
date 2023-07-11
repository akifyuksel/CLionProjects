#include <iostream>
#include <cstring>
#include "cmake-build-debug/AString.h"

using namespace std;

template <typename T>
void test(T expected, T actual, const string testName) {
    if (expected == actual) {
        cout << testName << " PASSED\n";
    }
    else {
        cout << testName << " FAILED\n";
        cout << "expected " << expected << "\n";
        cout << "but was " << actual << "\n";
    }
}

void testAStringClass() {
    auto *astring= new AString("");
    test(0, astring->length(), "test string length");
    cout << "testing" << "\n";
    auto *first = new AString("hello");
    auto *second = new AString(" world");
    test(strcmp("hello world", (*first + *second).toCString()) == 0, true, "test string concat");

    delete astring;
    delete first;
    delete second;
}

int main() {
    testAStringClass();
    cout << "DONE.";
    return 0;
}
