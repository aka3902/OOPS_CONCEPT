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

     Teacher(Teacher & orgobj)
     {
       this->name = orgobj.name;
       this->dept = orgobj.dept;
       this->subjects = orgobj.subjects;
       this->salary = orgobj.salary;

     }
    void getinfo()
    {

      cout<<" name: "<<name<<endl;
      cout<<" dept: "<<dept<<endl;
      cout<<" salary: "<<salary<<endl;
      cout<<" subject: "<<subjects<<endl;
      cout<<" I am back"<<endl; 

    }

};

int main()
{ 
  Teacher t1("arpit","cse","c++",230000);

    Teacher t2(t1);
     t2.getinfo();

     return 0;
}

// above code is same as copy constructor because in cpp the default copy constructor is shallow copy constructor
/************************************* OUTPUT *******************************************
 name: arpit
 dept: cse
 salary: 230000
 subject: c++
 */