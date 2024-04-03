#include <iostream>
using namespace std;

class Employee
{
    long int ID;
    string name;
    string DOB;
    double salary;

public:
    void get_employeeDetails()
    {
        cout << "----Enter the Employee Details----" << endl;
        cout << "Enter the Employee ID: ";
        cin >> ID;
        cout << "Enter the Employee Name: ";
        cin >> name;
        cout << "Enter the Employee Date of Birth: ";
        cin >> DOB;
        cout << "Enter the salary of the Employee: ";
        cin >> salary;
    }

    void display() {
        cout<<endl<<"----DISPLAYED DETAILS----"<<endl;
        cout << "Employee ID: "<<ID<<endl;
        cout << "Employee Name: "<<name<<endl;
        cout << "Employee Date Of Birth: "<<DOB<<endl;
        cout << "Employee Salary: "<<salary<<endl;
    }
};

class Organization : public Employee
{
private:
    string Org_Name;
    int No_Of_Emp;

public:
    void get_details()
    {
        Employee:: get_employeeDetails();
        cout <<endl<<"----Enter the Organisation Details----" << endl;
        cout << "Enter the Organization Name: ";_
        cin >> Org_Name;
        cout << "Enter the number of employees in an Organization: ";
        cin >>  No_Of_Emp;
    }

    void displayDetails()
    {
        Employee :: display();
        cout << "Organization Name: "<<Org_Name<<endl;
        cout << "Enter the Number of employees in the Organization: "<<No_Of_Emp<<endl;
    }
};


int main()
{
    Organization org;
    org.get_details();
    org.displayDetails();
    return 0;

}
