#include "point.h"

int operator==(point a, point b)
{
    return (a.x == b.x && a.y == b.y);
}