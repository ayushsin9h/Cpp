#include<iostream>
using namespace std;
class overloading{
public:
void func(int x,int y){
cout<<"the value of x is "<<x<<"the value of y is"<<y<<endl;}
void func(double x,double y)
{
    cout<<"the value of x in double is"<<x<<"the value of y in double is"<<y<<endl;
}
};
int main()
{
overloading obj;
     obj.func(12347689,340985674);
    obj.func(3456783.67548,785635.896700);
return 0;
}