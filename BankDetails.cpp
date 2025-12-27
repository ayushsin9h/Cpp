#include<iostream>
#include<string>
using namespace std;
class bank_acc{
private:
string name, acc_type;
int acc_num;
double bamt;
public:

void assignvalues(double b_amt, int accnum, const string accname, const string acctype)
{
    bamt=b_amt;
    acc_num=accnum;
    name=accname;
    acc_type=acctype;
}
void deposite(double amount){
bamt=bamt+amount;
}
void withdraw(double amount)
{
if (amount>bamt)
cout<<"insufficient balance"<<endl;
else
bamt=bamt-amount;
}
void display(){
cout << "Name of the acc holder" << name << "balance in the acc"<< bamt << "acc type:"<<acc_type<< endl;
}
};
int main(){

//important segment
//class variable
bank_acc account;
    account.assignvalues(1000.0, 123456, "john" , "Savings");
    account.deposite(500.0);
    account.withdraw(200.0);
    account.display();

    return 0;
}

