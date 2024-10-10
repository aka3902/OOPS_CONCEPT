#include<iostream>
using namespace std;

class Teacher{

// properties or attributes

    public:
    string name;
    string dept;
    string subjects;
    float salary;

  

Teacher() //non parameterised constructor
   {
       dept="cse";
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
 
  Teacher t1;
  t1.getinfo();


     return 0;
   
}

/************************************* OUTPUT ********************************************************************************
 name: 
dept: cse
 subject: 
 */