#include <iostream>

#include "log.h"
#include "usermath.h"

using namespace std;

namespace Test
{

class Name
{
public:
    int   a = 3;
    char  c = 1;
    float b = 13;

    // dsad
    int v = 1;

    char  c  = 12;
    int   ds = 1;
    float pp = .1f;
};
struct test
{
    int         a;
    int         b;
    const char *c;
};
struct test demo[] = {
    {56, 23,    "hello"},
    {-1, 93463, "world"},
    {7,  5,     "!!"   }
};

} // namespace Test

int main()
{
    cout << "this is main file" << endl;

    Log log;

    Vec2 vec(2, 3);
    cout << vec;
    char s = getchar();

    int help = 11;
    return 0;
}