#include<iostream>
#include <string>
using namespace std;

 class student{

    public:
    string name;
    double cgpa;

    student(string name,double cgpa)
    {
        this->name=name;
        this->cgpa=cgpa;

    }
 
    student()
    {
      name="arpit";
    }
    


 };


int  main()
{
   student s1("rahul",8.9);

   student s2(s1);
   cout<<s2.name<<" "<<s2.cgpa<<endl;



     
}

// above code is same as copy constructor because in cpp the default copy constructor is shallow copy constructor
/************************************* OUTPUT *******************************************
 
 */