#include "point.h"

Point::Point(const double x, const double y)
{
    _x = x;
    _y = y;
}

double Point::X() const
{
    return _x;
}

double Point::Y() const
{
    return _y;
}

void Point::X(const double x)
{
    _x = x;
}

void Point::Y(const double y)
{
    _y = y;
}

Point operator+(const Point& lhs, const Point& rhs)
{
    return Point(lhs.X() + rhs.X(), lhs.Y() + rhs.Y());
}

Point operator-(const Point& lhs, const Point& rhs)
{
    return Point(lhs.X() - rhs.X(), lhs.Y() - rhs.Y());
}

Point operator*(const Point& lhs, const Point& rhs)
{
    return Point(lhs.X() * rhs.X(), lhs.Y() * rhs.Y());
}

Point operator/(const Point& lhs, const Point& rhs)
{
    return Point(lhs.X() / rhs.X(), lhs.Y() / rhs.Y());
}

Point& Point::operator+=(const Point& rhs)
{
    X(X() + rhs.X());
    Y(Y() + rhs.Y());
    return *this;
}
Point& Point::operator-=(const Point& rhs)
{
    X(X() - rhs.X());
    Y(Y() - rhs.Y());
    return *this;
}
Point& Point::operator*=(const Point& rhs)
{
    X(X() * rhs.X());
    Y(Y() * rhs.Y());
    return *this;
}
Point& Point::operator/=(const Point& rhs)
{
    X(X() / rhs.X());
    Y(Y() / rhs.Y());
    return *this;
}

Point Point::operator-() const
{
    return Point(-X(), -Y());
}

bool operator==(const Point& lhs, const Point& rhs)
{
    return lhs.X() == rhs.X() && lhs.Y() == rhs.Y();
}

bool operator!=(const Point& lhs, const Point& rhs)
{
    return !(lhs == rhs);
}

std::ostream& operator<<(std::ostream& os, const Point& pt)
{
    os << "{ X: " << pt.X() << ", Y: " << pt.Y() << " }";
    return os;
}

std::istream& operator>>(std::istream& is, Point& pt)
{
    double x, y;
    is >> x >> y;
    pt.X(x);
    pt.Y(y);
    return is;
}
