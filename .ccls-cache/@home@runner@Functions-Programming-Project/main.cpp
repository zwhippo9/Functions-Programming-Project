#include <iostream>
#include <cmath>
using namespace std;

//calculate distance between two points
double calcDistance(double x1, double y1, double x2, double y2){
  return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

//calculate radius of circle
double calcRadius(double centerX, double centerY, double pointX, double pointY){
  return calcDistance(centerX, centerY, pointX, pointY);
}

//function to calculae circumference
double calcCircumference(double radius) {
  const double pi = 3.14159264;
  return 2 * pi * radius;
}

//function to calculate area
double calcArea(double radius) {
  const double pi = 3.14159264;
  return pi * pow(radius, 2);
}

int main () {
double centerX, centerY, pointX, pointY;

//input coordinates of center and point
cout << "Enter the coordinates for the circle's center as 'x y': ";
cin >> centerX >> centerY;

cout << "Enter the coordinates for a point on the circle as 'x y': ";
cin >> pointX >> pointY;

//Radius
double radius = calcRadius(centerX, centerY, pointX, pointY);

//Circumfrence
double circumference = calcCircumference(radius);

//Area
double area = calcArea(radius);

//Output
cout << "Radius: " << radius << endl;
cout << "Circumference: " << circumference << endl;
cout << "Area: " << area << endl;

return 0;
}
