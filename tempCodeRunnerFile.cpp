#include <iostream>
using namespace std;
class student{
    int age=19;

    void disp1(){
        cout<<"The age is: "<<age<<endl;
    }

    protected:
    string name="komal";
    void disp2(){
        cout<<"The name is: "<<name<<endl;
    }

    public:
    string dept="CSE";
    void disp3(){
        cout<<"The department is: "<<dept<<endl;
    }

};

class cpublic:public student{
    public:
void show(){
        //cout<<"Age is: "<<age<<endl;
       // disp1();

        cout << "Name: " << name << endl;
        disp2();

        cout << "Department: " << dept << endl;
        disp3();
}

};

class cprotected: protected student{
public:
    void show()
    {
        //cout<<"Age is: "<<age<<endl;
        //disp1();

        cout << "Name: " << name << endl;
        disp2();

        cout << "Department: " << dept << endl;
        disp3();
    }
};

class child3 : private student
{
public:
    void show()
    {
    //    cout<<"Age is: "<<age<<endl;
    //     disp1();


        cout << "Name: " << name << endl;
        disp2();

        cout << "Department: " << dept << endl;
        disp3();
    }
};


int main()
{
    cpublic k1;
    cout << "Public Inheritance" << endl;
    k1.show();

    cout << endl;
    cprotected k2;
    cout << "Protected Inheritance" << endl;
    k2.show();

    cout << endl;

    cpublic k3;
    cout << "Private Inheritance" << endl;
    k3.show();

    
}