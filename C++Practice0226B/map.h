#pragma once

#include<map>
#include<unordered_map>
#include<tuple>
#include<iostream>

struct Point {
    int x, y;
    Point(int x, int y) : x(x), y(y) {}
};

std::ostream& operator<<(std::ostream& os, const Point& p)
{
    return os << '(' << p.x << ',' << p.y << ')';
}