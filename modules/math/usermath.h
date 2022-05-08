#ifndef USERMATH_H
#define USERMATH_H

#include <iostream>

class Vec2
{
public:
    Vec2();
    Vec2(float left, float right);

    friend std::ostream &operator<<(std::ostream &os, const Vec2 &vec);

private:
    float x;
    float y;
};

#endif