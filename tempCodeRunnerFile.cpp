#include <iostream>
using namespace std;
class area{
public:
int calculateArea(int side){
int a;
a=side*side;
return a;
}

float calculateArea(float b, float h){
    float a;
    a=0.5*b*h;
    return a;
}

int calculateArea(int l,int b)
{
    int a;
    a=l*b;
    return a;
}


};
int main(){
    area a1;

    int x=a1.calculateArea(10);
    cout<<"The area of square is: "<<x<<endl;

    int y=a1.calculateArea(2.0f,10.0f);
    cout<<"The area of triangle is: "<<y<<endl;

    int z=a1.calculateArea(50,30);
    cout<<"The area of rectangle is: "<<z<<endl;

    

}