#include<iostream>
using namespace std;

class Teacher{

// properties or attributes

    public:
    string name;
    string dept;
    string subjects;
    float salary;

    Teacher(string name,string dept,string subjects, float salary) // parametrised constructor  
    {
       this->name =name;
       this->dept=dept;
       this->subjects=subjects;
       this->salary=salary;

    }

    Teacher()
   {}
    // methods or member function
    void changedept(){
        //dept = newdept;
    }
    void setsalary(float s) 
    {
         salary=s;
    }

    double getsalary()
    {
      return salary;
    }
    void getinfo()
    {
      cout<<" name: "<<name<<endl;
      cout<<" dept: "<<dept<<endl;
      cout<<" salary: "<<salary<<endl;
      cout<<" subject: "<<subjects<<endl;
    }

};

int main()
{
 
  Teacher t1("arpit","cse","c++",250000);
 
    Teacher t2(t1); //this line is creating a new object t2 of the class Teacher by using the copy constructor

     t2.getinfo();

     return 0;
}

/* 
Explanation 
Explanation of Copy Constructor
Copy Constructor: The default copy constructor in C++ is automatically provided by the compiler if you do not define one. It performs a shallow copy, meaning it copies the values of the attributes from the source object to the new object. In your case, t2 is created as a copy of t1.

Attributes Copied:

All public member variables (name, dept, subjects, and salary) of the t1 object are copied to the corresponding member variables of the t2 object.
 */


/************************************* OUTPUT *************************************************

name: arpit
dept: cse
salary: 250000
subject: c++

*/