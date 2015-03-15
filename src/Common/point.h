#ifndef POINT_H
#define POINT_H
#include <iostream>

/*	A Point represents a point in a two-dimensional Cartesian coordinate space.
*  Point supports minimal vector arithmetic.
*	The coordinates of a Point are defined as double
*/

class Point
{
private:
    double _x;
    double _y;
public:
    static const Point Zero;

    Point(const double x = 0.0, const double y = 0.0);

    double X() const;
    double Y() const;
    void X(const double x);
    void Y(const double y);

    friend Point operator+(const Point&, const Point&);
    friend Point operator-(const Point&, const Point&);
    friend Point operator*(const Point&, const Point&);
    friend Point operator/(const Point&, const Point&);

    Point& operator+=(const Point&);
    Point& operator-=(const Point&);
    Point& operator*=(const Point&);
    Point& operator/=(const Point&);

    Point operator-() const;

    friend bool operator==(const Point&, const Point&);
    friend bool operator!=(const Point&, const Point&);

    friend std::ostream& operator<<(std::ostream&, const Point&);
    friend std::istream& operator>>(std::istream&, Point&);
};

#endif // POINT_H
