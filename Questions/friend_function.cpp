#include<iostream>
using namespace std;

class ankit;
class ankush{
    private:
    int money = 20;
    friend void addmoney(ankush,ankit);
};

class ankit{
    private:
    int money = 30;
    friend void addmoney(ankush,ankit);
};

void addmoney(ankush obj1,ankit obj2)
{
    cout<<obj1.money+obj2.money<<endl;
}
int main() {
    ankush a1;
    ankit a2;
    addmoney(a1,a2);
}