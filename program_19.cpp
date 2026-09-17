#include<iostream>
using namespace std;

class Student{
int age=19;
string name="komal";
int enroll_no=2321;
float marks=99.0;

public:
void display()
{
cout<<"The name of studnet is: "<<name<<endl;
cout<<"Age :"<<age<<endl;
cout<<"Enrollment number: "<<enroll_no<<endl;
cout<<"Marks: "<<marks<<endl;
}
};

class Faculty{
string facultyName="Mrs. Rose";
int facultyCode=43213;
float salary=40000;
string dept="Arts & literature";
int age=27;
int experience=7;
string gender="female";

public:
void display()
{
    cout<<"The faculty name is: "<<facultyName<<endl;
    cout<<"The code is: "<<facultyCode<<endl;
    cout<<"The salary is:"<<salary<<endl;
    cout<<"The department is: "<<dept<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Years of experience: "<<experience<<endl;
    cout<<"Gender: "<<gender<<endl;
}
};

class person:public Student, public Faculty{
    public: 
    void display()
    {
    Student::display();
    cout<<endl;
    Faculty::display();
    }
};
int main()
{
    person p1;
  p1.display();
}