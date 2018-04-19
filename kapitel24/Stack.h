#ifndef KAPITEL24_STACK_H
#define KAPITEL24_STACK_H


class Stack {
public :
    explicit Stack(int s = 5);
    ~Stack();
    bool push(const int &element);
    bool pop(int &element);
    bool top(int &element);
private :
    int *_pa;
    int _top;
    int _count;
};


#endif //KAPITEL24_STACK_H
