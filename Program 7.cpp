    #include <iostream>

    using namespace std;

    class student{
    int scores[5];
    public:
        void input(){
        for(int i=0;i<5;i++)
        {
            cin>>scores[i];
        }
        }
        int calculateTotalScore(){
        int sum=0;
        for(int i=0;i<5;i++)
        {
            sum+=scores[i];
        }
        return sum;

        }


    };
    int main()
    {
        int n;
        cout<<"Enter the number of students:";
        cin>>n;

        student s[n];

     s[0].input();
     int res=s[0].calculateTotalScore();


     int Count=0;
     int i=1;
    while(i<n)
    {
        s[i].input();
        int ress=s[i].calculateTotalScore();
        if(ress>res)
            Count++;
        i++;
    }
    cout<<Count;

    }
