//for  parametirized constructor
//inheritance in C++ is a key feature of Object-Oriented Programming (OOP) that allows a class (called the derived class) to inherit properties and behaviors (methods and data members) from another class (called the base class).
#include<iostream> 
using namespace std;

class Person
{

    public:
    string name;
    int age;

    Person(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
    
    
    
};

class Student : public Person{
    public:
    int rollno;
     
    Student(string name,int age,int rollno) : Person(name,age)
    {
        this->rollno = rollno;
    }

    void getinfo()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Rollno: "<<rollno<<endl;

    }
    

};

int main()
{
    Student s1("Rahul Kumar",19,124);
    
     s1.getinfo();


}