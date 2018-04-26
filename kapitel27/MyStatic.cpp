#include "MyStatic.h"

int MyStatic::a = 0;

MyStatic::MyStatic() {
    this->a++;
}

MyStatic::~MyStatic() {
    this->a--;
}

int MyStatic::getA() {
    return a;
}
