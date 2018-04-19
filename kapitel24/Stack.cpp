#include "Stack.h"

Stack::Stack(int s) {
    _pa    = new int[s];
    _top   = s - 1;
    _count = -1;
}

Stack::~Stack() {
    delete[] _pa;
}

bool Stack::push(const int &element) {
    if (_count < _top) {
        _pa[++_count] = element;
        return true;
    }
    return false;
}

bool Stack::pop(int &element) {
    if (_count >= 0) {
        element = _pa[_count--];
        return true;
    }
    return false;
}

bool Stack::top(int &element) const {
    if (_count >= 0) {
        element = _pa[_count];
        return true;
    }
    return false;
}