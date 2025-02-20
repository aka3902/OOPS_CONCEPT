#include<iostream>
using namespace std;

class Teacher{

    public:
    string name;
    string dept;
    string subjects;
    float salary;

   
};

int main()
{
 
  Teacher t1;
  t1.name="Arpit";
  t1.dept="CSE";
  t1.subjects="C++";
  t1.salary=85000;
  

   cout<<t1.name<<" ki salary-> "<<t1.salary<<" and dept:"<<t1.dept <<" and subjects "<<t1.subjects;
   
     return 0;

   
}

/***********************************************************
 

o/p -> Arpit ki salary -> 85000 and dept:CSE and subjects C++

 */