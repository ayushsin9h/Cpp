#include<iostream>
using namespace std;
class student
{
    string name;
    int roll;
public:
void getdata(string name1, int roll1)
{
name=name1;
roll=roll1;
}
void display(){
cout<<"the name of the student is:"<< name << "his/her roll number is:"<< roll<< endl;
}
};
/// @brief 
/// @return 
int main()
{
    student details;
details.getdata("john", 10896);
details.display();
return 0;
}