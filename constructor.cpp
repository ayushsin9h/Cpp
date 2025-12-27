#include<iostream>
using namespace std;
class constructor
{
private:
double amt,si;
public:
//initialisation of the constructor
constructor() : si(0), amt(0) {}
//function for futhur calculation
void calc( double principle, double rate, double time){
si = (principle*rate*time);
amt= si+principle;
cout<<"the simple interest on the principle is:"<<si<<endl;
cout<<"the total amount fetched on the priciple is:"<<amt<<endl;
}
};
int main(){
constructor ob;
ob.calc(1234.76, 0.45, 4.5);
return 0;
}