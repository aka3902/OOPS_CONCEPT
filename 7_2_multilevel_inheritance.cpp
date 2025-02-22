
#include<iostream> 
using namespace std;

class Person
{

    public:
    string name;
    int age;

};

class Student : public Person{
    public:
    int rollno;
  
   
    

};

class GradStudent  : public Student{
    public:
    string research;
    void getinfo()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Rollno: "<<rollno<<endl;
        cout<<"Research: "<<research<<endl;


    }

};

int main()
{
    GradStudent s1;
    s1.name="Rahul Kumar";
    s1.age=19;
    s1.rollno=210;
    s1.research="Ai";
     s1.getinfo();


}