//hierarchical inheritance
#include<iostream>
using namespace std;


class member{
    char gender[20];
    int age;
    public:
    void get()
    {
        cout<<"Age: ";cin>>age;
        cout<<"Gender: ";cin>>gender;
    }
    void disp()
    {    
        cout<<"Age: "<<age<<endl;
        cout<<"Gender: "<<gender<<endl;
    }
};

class stud:public member{
    char level[20];
    public:
    void getdata()
    {
        member::get();
        cout<<"Class: ";cin>>level;
    }
    void disp2()
    {    
        member::disp();
        cout<<"Level: "<<level<<endl;
    }
};

class staff:public member{
   float salary;
    public:
    void getdata()
    {
        member::get();
        cout<<"Salary:Rs";cin>>salary;
    }
    void disp3()
    {    
        member::disp();
        cout<<"Salary:Rs"<<salary<<endl;
    }
};


int main()
{
    member M;stud s;staff S;
    cout<<"Student"<<endl;
    cout<<"Enter data"<<endl;
    s.getdata();
    cout<<endl<<"Displaying data"<<endl;
    s.disp2();
    cout<<endl<<"Staff data"<<endl;
    cout<<"Enter data"<<endl;
    S.getdata();
    cout<<endl<<"Displaying data"<<endl;
    S.disp3();
    
}