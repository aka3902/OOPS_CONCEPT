
#include<iostream> 
using namespace std;

class Student
{

    public:
    string name;
    int age;

};

class Teacher {
    public:
    string subject;
    int salary;

};
  
   


class Ta  : public Student,public Teacher{
   
    public:
    

};

class Pa : public Ta{
    public:
    int exp;
    void getinfo()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"subject: "<<subject<<endl;
        cout<<"salary: "<<salary<<endl;
        cout<<"exp: "<<exp<<endl;


    }
};

int main()
{
    Pa s1;
    s1.name="Rahul Kumar";
    s1.age=19;
    s1.subject=210;
    s1.salary=134000;
    s1.exp=3;
     s1.getinfo();


}