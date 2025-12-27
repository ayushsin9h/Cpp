#include<iostream>
using namespace std;
class cse{
private:
int y, x;
public:
void setvalue(int yvalue, int xvalue)
{

    y=yvalue;
x=xvalue;
}
void display()
{
cout<<"y:"<<y<<"x:"<<x<<endl;
}
};
int main(){
cse ob;
ob.setvalue(50,40);
ob.display();
return 0;
}




