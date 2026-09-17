#include <iostream>
using namespace std;
class student{
int scores[5];

public:
void input(){
    cout<<"enter the marks: ";
    for(int i=0;i<5;i++)
    {
        cin>>scores[i];
    }
}
int calculateTotalScore(){
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum=sum+scores[i];
    }
    return sum;
} 

};

int main(){
    int n;
    cout<<"enter the number of students: ";
    cin>>n;
    student s1;
 
    s1.input();
    int anna=s1.calculateTotalScore();

    int count=0;
    int s;
    for(int i=1;i<n;i++)
    {
        s1.input();
        s=s1.calculateTotalScore();
        if(s>anna)
        count++;
    }
    cout<<"The students scored higheer than anna are: "<<count<<endl;
}