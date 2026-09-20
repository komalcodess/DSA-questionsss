#include <iostream>
using namespace std;
class student{
int x=10;

public:
void display(){
    cout<<x<<endl;
}
friend student operator-(student );
friend student operator ++(student &);
friend student operator++(student &,int );
friend student operator --(student &);
friend student operator --(student &,int);

};

student operator -(student x)
{
    x.x=-x.x;
    return x;
}

student operator ++(student &num)
{
    num.x=num.x+1;
    return num;
}

student operator++ (student &num , int)
{
      student temp= num;   
    num.x =num.x+ 1;    
    return temp; 
}
student operator--(student &ko)
{
    --ko.x;
    return ko;
}
student operator--(student &nom, int)
{
    student temp= nom;
    nom.x--;
    return temp;
}
int main()
{
    student s1, s2;

    cout << "Original value is: ";
    s1.display();

    s2 = -s1;
    cout << "After the Unary operation : ";
    s2.display();

    s2 =++s1;
    cout << "Pre-increment: ";
    s2.display();

    s2 =s1++;
    cout << "Post-increment: ";
    s2.display();

    cout<<"Now the curr val is: ";
    s1.display();

    s2 = --s1;    
    cout << "After Pre-decrement: ";
    s2.display();
    s2 = s1--;
    cout << "Post-decrement: ";
    s2.display();

    cout << "Current value: ";
    s1.display();

}