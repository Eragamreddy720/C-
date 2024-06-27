#include <iostream>
#include <cmath> // for M_PI and sqrt
using namespace std;

class Shape {
public:
    // Constructor for Circle
    Shape(double radius) {
        double area = M_PI * radius * radius;
        cout << "Area of Circle with radius " << radius << " is " << area << endl;
    }

    // Constructor for Rectangle
    Shape(double length, double width) {
        double area = length * width;
        cout << "Area of Rectangle with length " << length << " and width " << width << " is " << area << endl;
    }

    // Constructor for Triangle
    Shape(double a, double b, double c) {
        double s = (a + b + c) / 2; // semi-perimeter
        double area = sqrt(s * (s - a) * (s - b) * (s - c)); // Heron's formula
        cout << "Area of Triangle with sides " << a << ", " << b << ", and " << c << " is " << area << endl;
    }
};

int main() {
    double radius, length, width, a, b, c;

    // Circle
    cout << "Enter radius of the circle: ";
    cin >> radius;
    Shape circle(radius);

    // Rectangle
    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;
    Shape rectangle(length, width);

    // Triangle
    cout << "Enter sides of the triangle: ";
    cin >> a >> b >> c;
    Shape triangle(a, b, c);

    return 0;
}


