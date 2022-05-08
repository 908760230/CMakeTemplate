#include "usermath.h"

Vec2::Vec2() : x(0), y(0)
{
}

Vec2::Vec2(float left, float right) : x(left), y(right)
{
}

std::ostream &operator<<(std::ostream &os, const Vec2 &vec)
{
    os << vec.x << " " << vec.y;
    return os;
}