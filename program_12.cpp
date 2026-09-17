#include <iostream>
using namespace std;
class Time{
int hrs;
int min;
int sec;

public:
Time()
{
    hrs=0;
    min=0;
    sec=0;
}

Time(int hrs, int min, int sec)
{
   this->hrs=hrs;
   this->min=min;
   this->sec=sec;
}

void add(Time t1, Time t2)
{
    hrs=t1.hrs+t2.hrs;
    min=t1.min+t2.min;
    sec=t1.sec+t2.sec;

    
    min =min + sec /60;
    sec = sec % 60;

    hrs =hrs + min / 60;
    min = min % 60;
    

}

void display()
{
    cout<<"The total time is: ";
    cout<<hrs<<":"<<min<<":"<<sec<<endl;
}
};
int main(){
    Time t1(8,18,45), t2(2,59,23),t3;
   t3.add(t1,t2);
    t3.display();
}