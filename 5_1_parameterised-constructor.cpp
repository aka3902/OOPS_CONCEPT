#include<iostream>
using namespace std;

class Teacher{

// properties or attributes

    public:
    string name;
    string dept;
    string subjects;
    float salary;

    Teacher(string n,string d,string s, double sl) //parametrised constructor  
    {
        //in this the intialiastion for each data is done without the help of this pointer
       name =n;
       dept=d;
       subjects=s;
       salary=sl;

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
      cout<<"dept: "<<dept<<endl;
      cout<<" subject: "<<subjects<<endl;
    }

};

int main()
{
 
  Teacher t1("arpit","cse","c++",230000);
  t1.getinfo();

     return 0;

   
}


/****************************** OUTPUT ***************************************************
 name: arpit
dept: cse
 subject: c++
 */