#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Object {
private:
    static int count;
public:
    Object();
    virtual ~Object();
    static int getCount();
};
