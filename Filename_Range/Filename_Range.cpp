#include <iostream>
#include <cassert>
#include "Filename_Range.h"
using namespace std;

int main()
{
    FileNameRange class_object;
    assert(class_object.filename_range("src/Hiker_spec.re")=="[4,9]");
    assert(class_object.filename_range("test/hiker_test.exs")=="[5,10]");
    assert(class_object.filename_range("wibble/test/hiker_spec.rb")=="[12,17]");
    assert(class_object.filename_range("hiker_steps.rb")=="[0,5]");
    assert(class_object.filename_range("hiker_spec.rb")=="[0,5]");
    assert(class_object.filename_range("test_hiker.rb")=="[5,10]");
    assert(class_object.filename_range("test_hiker.py")=="[5,10]");
    assert(class_object.filename_range("test_hiker.sh")=="[5,10]");
    assert(class_object.filename_range("tests_hiker.sh")=="[6,11]");
    assert(class_object.filename_range("test_hiker.coffee")=="[5,10]");
    assert(class_object.filename_range("hiker_spec.coffee")=="[0,5]");
    assert(class_object.filename_range("hikerTest.chpl")=="[0,5]");
    assert(class_object.filename_range("hiker_spec.coffee")=="[0,5]");
    assert(class_object.filename_range("hiker.tests.c")=="[0,5]");
    assert(class_object.filename_range("hiker_tests.c")=="[0,5]");
    assert(class_object.filename_range("hiker_test.c")=="[0,5]");
    assert(class_object.filename_range("hiker_Test.c")=="[0,5]");
    assert(class_object.filename_range("HikerTests.cpp")=="[0,5]");
    assert(class_object.filename_range("HikerTest.cs")=="[0,5]");
    assert(class_object.filename_range("hikerTests.cpp")=="[0,5]");
    assert(class_object.filename_range("HikerTest.java")=="[0,5]");
    assert(class_object.filename_range("DiamondTest.kt")=="[0,7]");
    assert(class_object.filename_range("HikerTest.php")=="[0,5]");
    assert(class_object.filename_range("hikerTest.js")=="[0,5]");
    assert(class_object.filename_range("hiker-test.js")=="[0,5]");
    assert(class_object.filename_range("hiker-spec.js")=="[0,5]");
    assert(class_object.filename_range("hiker.test.js")=="[0,5]");
    assert(class_object.filename_range("hiker.tests.ts")=="[0,5]");
    assert(class_object.filename_range("hiker_tests.erl")=="[0,5]");
    assert(class_object.filename_range("hiker_test.clj")=="[0,5]");
    assert(class_object.filename_range("fizzBuzz_test.d")=="[0,8]");
    assert(class_object.filename_range("hiker_test.go")=="[0,5]");
    assert(class_object.filename_range("hiker.tests.R")=="[0,5]");
    assert(class_object.filename_range("hikertests.swift")=="[0,5]");
    assert(class_object.filename_range("HikerSpec.groovy")=="[0,5]");
    assert(class_object.filename_range("hikerSpec.feature")=="[0,5]");
    assert(class_object.filename_range("hiker.fun")=="[0,5]");
    assert(class_object.filename_range("hiker.t")=="[0,5]");
    assert(class_object.filename_range("hiker.plt")=="[0,5]");
    assert(class_object.filename_range("hiker")=="[0,5]");
    cout<<"All test cases passed"<<endl;
}