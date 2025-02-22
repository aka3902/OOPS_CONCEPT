//for non parametirized constructor
#include<iostream> 
using namespace std;

class Person
{

    public:
    string name;
    int age;

    Person()
    {
        cout<<" base class or parent class"<<endl;
    }
    
    
    
};

class Student : public Person{
    public:
    int rollno;
     
    Student()
    {
        cout<<" derived  class or child class"<<endl;
    }
    void getinfo()
    {
        cout<<name<<" "<<age<<" "<<rollno;
    }
    

};

int main()
{
    Student s1;
    s1.name="Rahul Kumar";
    s1.age=19;
    s1.rollno=210;
     s1.getinfo();


}