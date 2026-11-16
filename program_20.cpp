
#include <iostream>
using namespace std;

class Employee
{
protected:
    string name;
    int id;

public:
    void setEmployee(string name, int id)
    {
    this->name=name;
    this->id=id;
    }

    void displayEmp()
    {
        cout << "the employee name is : " << name << endl;
        cout << " ID is : " << id << endl;
    }
};

class Developer : virtual public Employee
{
protected:
    string language;

public:
    void setDeveloper(string language)
    {
        this->language = language;
    }

    void displayDev()
    {
        cout << "The programming language is: " << language << endl;
    }
};

class Manager : virtual public Employee
{
protected:
    int teamSize;

public:
    void setManager(int t)
    {
       this->teamSize=t;
    }

    void displayManager()
    {
        cout << "The team size is : " << teamSize << endl;
    }
};

class TechLead : public Developer, public Manager
{
public:
    void display()
    {
        cout << "\n Tech Lead Details are: " << endl;

        displayEmp();
        displayDev();
        displayManager();
cout<<endl;
    }
};

int main()
{
    TechLead t1, t2, t3;

    t1.setEmployee("koaml", 67);
    t1.setDeveloper("C++");
    t1.setManager(23);

    t2.setEmployee("komss", 66);
    t2.setDeveloper("Java");
    t2.setManager(56);

    t3.setEmployee("Div", 68);
    t3.setDeveloper("Python");
    t3.setManager(100);

    t1.display();
    t2.display();
    t3.display();

    return 0;
}
