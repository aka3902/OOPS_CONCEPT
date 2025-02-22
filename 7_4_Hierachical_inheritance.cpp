
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
    string subject;
    int rollno;

};

class Teacher : public Person{
        
    public:
    string subject;
    void getinfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
      
        cout<<"subject: "<<subject<<endl;

    }


};

int main()
{
    Teacher s1;
    s1.name="Rahul Kumar";
    s1.age=19;
   
    s1.subject="Ai";
     s1.getinfo();


}