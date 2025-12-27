#include<iostream>
using namespace std;
int main()
{
double princ, amt , t, SI;
const double rate= 0.12;
cout<<"enter the value of the principle"<<endl;
cin>>princ;
cout<<"enter the amount of time for which the principle was invested"<<endl;
cin>>t;
SI = (princ*rate*t);
amt=princ+SI;
cout << "The subsequent total amount is:" << amt << endl;
return 0;
}
