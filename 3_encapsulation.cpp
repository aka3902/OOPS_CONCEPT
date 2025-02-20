//main feature of encapsulation is data hiding here the salary of teacher is hidden and only neccessary information is shown
//This is done through acess modifiers and this case it is done through private acess modifier
#include<iostream>
using namespace std;

class Teacher{

// properties or attributes
    private:
    float salary;
    public:
    string name;
    string dept;
    string subjects;
     
    void setsalary(float s) 
    {
         salary=s;
    }

    double getsalary()
    {
      return salary;
    }
   

};

int main()
{
 Teacher t1;
  t1.name="Arpit";
  t1.dept="CSE";
  t1.subjects="C++";
  //t1.salary=85000; // not allowed beacuse float is private and that is sign of encapsulation
  t1.setsalary(81000);
  
   cout<<t1.name<<" ki salary-> "<<t1.getsalary()<<" and dept:"<<t1.dept <<" and subjects "<<t1.subjects;
  //cout<<t1.salary; // not allowed because we can't directly access the private member if we have to use it  we have to write like this t1.getsalary() 
    
     return 0;
   
}