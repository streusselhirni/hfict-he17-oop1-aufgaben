#ifndef KAPITEL27_MYSTATIC_H
#define KAPITEL27_MYSTATIC_H


#include <printf.h>

class MyStatic {
public:
    MyStatic();
    ~MyStatic();
    static int getA();

private:
    int x;
    static int a;
};


#endif //KAPITEL27_MYSTATIC_H
