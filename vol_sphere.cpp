#include<iostream>
#include<cmath>
using namespace std;
class vol{
    public:
double calculate(double r){
const double pi=3.14;
return (4.0/3.0)*pi*pow(r,3);
}};
int main(){
    vol sphere;
    cout << "the volume of the sphere is:"<<sphere.calculate(4.56)<<endl;
    return 0;
}