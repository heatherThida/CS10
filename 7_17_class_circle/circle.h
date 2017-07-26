// 7.17 lecture for class starts


#ifndef CIRCLE_H
#define CIRCLE_H


class circle
{
public:
    circle(double = 0.0, double = 0.0, double = 0.0); // or I could have do double ix1 = 0.0, iy1 = 0.0, double ix2 = 0.0, double iy2 = 0.0
    double area();
    double circumference();
    bool outside(double,double);
    void set_radius(double);
    const double PI = 3.14159;

private:
    //private variables and functions are not accessible to NONMEMBER functions
    //information hiding is called polymorphism
    // they are accessible to member functions
    double cx, cy, radius;
};

#endif // CIRCLE_H
