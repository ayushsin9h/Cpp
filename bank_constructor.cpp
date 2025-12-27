#include<iostream>
#include<string>
using namespace std;
class bank_const{ 
    private:
string accname, acctype;
double bamt;
int acc_num;
public:
bank_const(string actname ,string acttype, double balamt , int actnum)
: accname(actname), acctype(acttype), bamt(balamt), acc_num(actnum){}
void deposite(double amount){
bamt+=amount;
}
void withdraw(double amount){

    if (bamt>amount)
    {
bamt-=amount;
    }
    else{
        cout<<"insufficient balance"<<endl;
    }
}
void display(){
cout << "Name of the acc holder " << accname << "balance in the acc "<< bamt << "acc type:"<<acctype<< endl;
}
};
int main(){
    bank_const obj("john" , "Savings", 10000.00, 2367946795);
    obj.deposite(5000);
    obj.withdraw(3000);
    obj.display();
    return 0;
    }