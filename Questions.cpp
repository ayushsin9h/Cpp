// 1. Write a C++ program to calculate the given series where the number of terms “N” will be user input. The series is 1+2+3+4+5+…….+N. The series calculation will be done in calculation() method and the method should be defined within class definition.
  #include<iostream>
  using namespace std;
  class sum
  {
public:
  int calculate(int n){
  int sum=0;
for(int i=1;i<=n;i++){
    sum+=i;
    }
    return sum;
}
  };
int main(){
int n;
cout <<"Enter the value of n:"<<endl;
cin>>n;
sum ob;
cout<<"Sum of the series is:  "<<ob.calculate(n)<<endl;
return 0;
}



// 2. Write a C++ program to calculate the given series where the number of terms “N” will be user input. The series is 12 + 22 + 32 + 42 +…….+N2. The series calculation will be done in calculation() method and the method should be defined outside of class definition.


// 3. Write a C++ program to show how to access a hidden global variable which is hiding by local variable.


// 4.	Write a C++ program to explain call-by-value, call-by-address and call-by-reference.
#include<iostream>
using namespace std;
void callbyvalue(int a, int b)
{
   int temp=a;
   a=b;
   b= temp;
    }
    void callbyaddress(int *a, int *b){
int temp=*a;
*a=*b;
*b=temp;
    }
    void callbyreference(int &a, int &b){
     int temp= a;
   a=b;
   b= temp;
    }
    int main()
    {
      int x=19,y=20;
      callbyvalue(x,y);
     cout<<"After call by value x: "<<x<<"y:  "<<y<<endl;
     callbyaddress(&x,&y);
     cout<<"After call by address x: "<<x<<"y:  "<<y<<endl;
     callbyreference(x,y);
     cout<<"After call by reference x: "<<x<<"y:  "<<y<<endl;
         }
         

// 5.	Write a C++ program to calculate simple interest on given principal, period and rate where principal, period and rate are user input. In this program you need to use default argument concept.
 #include<iostream>
 using namespace std;
 int main(){
int si=0,amt=0;
double princ,rt,period;
cout<<"Enter the principle:  "<<endl;
cin>>princ;
cout<<"Enter the rate:  "<<endl;
cin>>rt;
cout<<"Enter the period:  "<<endl;
cin>>period;
si=(princ*rt*period)/100;
cout<<"The Simple Interest is:  "<< si<<endl;
 }


// 6.	Write a C++ program to implement function overloading concept on non-static function.
#include<iostream>
using namespace std;
 void swap(int a, int b)
{
int temp=a;
a=b;
b=temp;
}
void swap(int *a, int *b){
int temp=*a;
*a=*b;
*b=temp;
}
int main()
{
  int x=20,y=30;
  swap(x,y);
  swap(&x,&y);
return 0;
}


// 7.	Write a C++ program to demonstrate the use of various data types.
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    // Complete the code.
    int a=3;
    long b=12345678912345;
    char ch='a';
    float c=334.230;
    double d=14049.30493;
   cout<< a << "\n";
   cout<< b << "\n";
   cout<< ch << "\n";
   cout<< c << "\n";
   cout<< d << "\n";
    return 0;
}
