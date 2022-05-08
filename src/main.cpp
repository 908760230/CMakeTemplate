#include <iostream>
#include "log.h"
#include "usermath.h"
using namespace std;

int main()
{
    cout << "this is main file" << endl;

    Log log;

    Vec2 vec(2, 3);
    cout << vec;
    char s = getchar();
    return 0;
}