#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
const float PI = 3.141592f;
using namespace std;

class Point {
public:
    double x, y;
    Point() { x = 0; y = 0; }
    Point(double a, double b) { x = a; y = b; }
    
    friend ostream& operator<<(ostream& os, Point& p) {
        return os << p.x << ", " << p.y;
    }
    Point operator+(const Point& pt) {
        Point sum = *this;
        sum.x += pt.x;
        sum.y += pt.y;
        return sum;
    }
    Point operator-(const Point& pt) {
        Point difference = *this;
        difference.x -= pt.x;
        difference.y -= pt.y;
        return difference;
    }
};

class Shape {
public:
    double area();
    double circumference();
    void box();
    void display();
};

class Circle:public Shape {
    Point center;
    double radius, c_area, c_circum;
public:
    Circle(Point& origin, int r) { center = origin; radius = r; }
    double area() {
        c_area = PI * radius * radius;
        return c_area;
    }
    double circumference() {
        c_circum = 2 * PI * radius;
        return c_circum;
    }
    void box() {
        cout << "Top Left: " << "(" << center.x - radius << "," << center.y + radius << ")" << endl;
        cout << "Top Right: " << "(" << center.x + radius << "," << center.y + radius << ")" << endl;
        cout << "Bottom Left: " << "(" << center.x - radius << "," << center.y - radius << ")" << endl;
        cout << "Bottom Right: " << "(" << center.x + radius << "," << center.y - radius << ")" << endl;
    }
    void display() {
        cout << area() << endl;
        cout << circumference() << endl;
    }
    
};

class Square:public Shape {
    Point p1, p2, p3, p4;
    double s_area, s_circum;
public:
    Square(Point& a, Point& b, Point& c, Point& d) {
        p1 = a;
        p2 = b;
        p3 = c;
        p4 = d;
    }
    
    double side = sqrt((p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y));

    double area() {
        s_area = side * side;
        return s_area;
    }
    double circumference() {
        s_circum = side * 4;
        return s_circum;
    }
    void box() {
        const int sides = 4;
        double x_val[4] = { p1.x, p2.x, p3.x, p4.x };
        sort(x_val, x_val + sides);
        double y_val[4] = { p1.y, p2.y, p3.y, p4.y };
        sort(y_val, y_val + sides);
        
        cout << "Top Left: (" << x_val[0] << ", " << y_val[3] << ")" << endl;
        cout << "Top Right: (" << x_val[3] << ", " << y_val[3] << ")" << endl;
        cout << "Bottom Left: (" << x_val[0] << ", " << y_val[0] << ")" << endl;
        cout << "Bottom Right: (" << x_val[3] << ", " << y_val[0] << ")" << endl;
    }
    void display() {
        cout << area() << endl;
        cout << circumference() << endl;
    }
};

class Triangle:public Shape {
    Point p1, p2, p3;
    double t_area, t_circum;
public:
    Triangle(Point& a, Point& b, Point& c) {
        p1 = a;
        p2 = b;
        p3 = c;
    }
    
    double s1 = sqrt((p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y));
    double s2 = sqrt((p1.x - p3.x)*(p1.x - p3.x) + (p1.y - p3.y)*(p1.y - p3.y));
    double s3 = sqrt((p3.x - p2.x)*(p3.x - p2.x) + (p3.y - p2.y)*(p3.y - p2.y));

    double area() {
        t_area = (s1 + s2 + s3)/2;
        return t_area;
    }
    double circumference() {
        t_circum = s1 + s2 + s3;
        return t_circum;
    }
    void box() {
        const int sides = 3;
        double x_val[3] = { p1.x, p2.x, p3.x };
        sort(x_val, x_val + sides);
        double y_val[3] = { p1.y, p2.y, p3.y };
        sort(y_val, y_val + sides);
        
        cout << "Top Left: (" << x_val[0] << ", " << y_val[2] << ")" << endl;
        cout << "Top Right: (" << x_val[2] << ", " << y_val[2] << ")" << endl;
        cout << "Bottom Left: (" << x_val[0] << ", " << y_val[0] << ")" << endl;
        cout << "Bottom Right: (" << x_val[2] << ", " << y_val[0] << ")" << endl;
    }
    
    void display() {
        cout << area() << endl;
        cout << circumference() << endl;
    }
};

int main() {
    cout << "\nCircle: " << endl;
    Point p1(3, 5);
    Circle c1(p1, 23);
    c1.area();
    c1.circumference();
    c1.box();
    c1.display();
    
    cout << "\nSquare: " << endl;
    Point p2(-10, 24);
    Point p3(-10, -1);
    Point p4(15, 24);
    Point p5(15, -1);
    Square s1(p2, p3, p4, p5);
    s1.area();
    s1.circumference();
    s1.box();
    s1.display();
    
    cout << "\nTriangle: " << endl;
    Point p6(-6,5);
    Point p7(0,-3);
    Point p8(12, -19);
    Triangle t1(p6, p7, p8);
    t1.area();
    t1.circumference();
    t1.box();
    t1.display();

}
