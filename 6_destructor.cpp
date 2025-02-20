// Destructors only delete memory for static allocations because such memory is automatically scoped within the object and doesn't require manual management.
// Dynamic memory management requires explicit deallocation in the destructor or the use of smart pointers to automate the process.
// C++ prioritizes giving programmers control over memory management to avoid unintended behavior.

#include<iostream> 
using namespace std;

class Student
{

    public:
    string name;
    double* cgpa;

    Student(string name,double cgpaptr)
    {
        this->name=name;
        cgpa = new double;
        *cgpa = cgpaptr;
    }

    
    ~Student()  //destructor automatically called 
    {
        cout<<"Hi I delete everything"<<endl;
        delete cgpa; //this is done to delete dynamically allocated memory
    }
    void getinfo()
    {
          cout<<"name "<<name<<endl;
          cout<<"cgpa "<<cgpa<<endl;

    }

};

int main()
{
    Student s1("Rahul Kumar",8.9); 
    s1.getinfo();


}