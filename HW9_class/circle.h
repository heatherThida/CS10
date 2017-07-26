// HW9

#ifndef CIRCLE_H
#define CIRCLE_H


class circle
{
public:
    circle();
    circle(double ix= 0.0, double iy= 0.0, double ir= 0.0); // or I could have do double ix1 = 0.0, iy1 = 0.0, double ix2 = 0.0, double iy2 = 0.0
    double area();
    double circumference();
    bool outside(double,double);
    void set_radius(double);
    double get_x();
    double get_y();
    double get_radius();
    //void read_circle(circle &);
    //void print_circle(circle );
private:
    double cx,cy,radius;
};

void read_circle(circle &c);
void print_circle(circle c);

#endif // CIRCLE_H
