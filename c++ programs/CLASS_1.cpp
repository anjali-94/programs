//multiple inheritance

#include<iostream>
using namespace std;
class stud{
    protected:
    int roll,m1,m2;
    public:
    void get()
    {
        cout<<"Enter the roll no.: ";cin>>roll;
        cout<<"Enter the two highest marks: ";cin>>m1>>m2;
    }
};
class extracurriculam {
    protected:
    int xm;
    public: void getsm()
    {
        cout<<"\nEnter the marks for extracurriculam activities: ";cin>>xm;
    }
};

class output: public stud,public extracurriculam {
    int tot,avg;

    public:
    void display()
    {
        tot = (m1+m2+xm);
        avg = tot/3;
        cout <<"\nRoll no : "<<roll<<"\nTotal:"<<tot;
        cout<<"\nAverage: "<<avg;
    }
};

int main()
{
    output O;
    O.get();
    O.getsm();
    O.display();
}