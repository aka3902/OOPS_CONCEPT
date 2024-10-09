//it is used set and get the value of private datamembersit is used set and get the value of private datamembers
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
  //  float salary;

     
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
 // t1.salary=85000; // not allowed beacuse float is private
  t1.setsalary(84000);
  
   cout<<t1.name<<" ki salary-> "<<t1.getsalary()<<" and dept:"<<t1.dept <<" and subjects "<<t1.subjects;
 // cout<<t1.salary; // not allowed because we can't directly access the private member if we have to use it  we have to write like this t1.getsalary() 
    
     return 0;





   
}