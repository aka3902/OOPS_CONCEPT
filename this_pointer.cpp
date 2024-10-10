#include<iostream>
using namespace std;

class Teacher{

// properties or attributes

    public:
    string name;
    string dept;
    string subjects;
    float salary;


 //this pointer is used to specify the current object

    Teacher(string name,string dept,string subjects,float salary)  // usage of this pointer 
    {
        this->name =name;
        this->dept=dept;
        this->subjects=subjects;
        this->salary=salary;

    }

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
      cout<<" subject: "<<subjects<<endl;
      cout<<" salary: "<<salary<<endl;
    }

};

int main()
{
 
  Teacher t1("arpit","cse","c++",230000);
     t1.getinfo();

     return 0;
}



/****************************** OUTPUT **********************************************
 name: arpit
 dept: cse
 subject: c++
 salary: 230000
 
 */