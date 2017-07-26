#ifndef RECTANGLE_H
#define RECTANGLE_H


class rectangle
{
public:
    rectangle(double = 0.0, double = 0.0, double = 0.0, double = 0.0;
    double area();
    double perimeter();
    double outside(double, double, double);
    void set_len(double);
    void set_width(double);
    void get_length(double);
    void get_width(double );
private:
    double rx, ry, length, width;
};

#endif // RECTANGLE_H
