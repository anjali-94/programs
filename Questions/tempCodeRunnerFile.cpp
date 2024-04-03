#include <iostream>
using namespace std;
void show(int age){
    cout<<"age is "<<age<<endl;
}

void show(float salary){
    cout<<"salary  "<<salary<<endl;
}

void show(string name){
    cout<<"name is "<<name<<endl;
}


int main() {
    show("anjali");
    show(34);
    show(5.6);
}