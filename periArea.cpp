#include<iostream>
using namespace std;
// area and perimeter of a rectangle
void calculaterect(double l , double  b , double &area , double &peri)
{
area=l*b;
peri=2*(l+b);
}
// area and perimeter of square 
void calculatesquare(double side , double &area1 , double &peri1)
{
area1= side*side;
peri1= 4*side;
}
// area and perimeter of circle 
void calculatecircle(double r , double &area2 , double &peri2){
const double pi= 3.14;
area2=pi*(r*r);
peri2= 2*pi*r;
}
int main()
{
    double area, perimeter;

    calculaterect(3.0 , 4.0 , area , perimeter);
    cout << "Rectangle (length = 3, width = 4) - Area: " << area << ", Perimeter: " << perimeter << endl;

    calculatesquare(4.0 , area, perimeter);
    cout << "Square (side = 4) - Area: " << area << ", Perimeter: " << perimeter << endl;

    calculatecircle(3.0, area, perimeter);
    cout << "Circle (radius = 3) - Area: " << area << ", Perimeter: " << perimeter << endl;

    return 0;
}