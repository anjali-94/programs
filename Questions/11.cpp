#include<iostream>

using namespace std;

class POUNDS;

class KILOS{
    private:
    int kilograms;
    int grams;
    public:
    KILOS(int kg, int g) : kilograms(kg), grams(g) {}
    
    friend void addweight(KILOS,POUNDS);
};

class POUNDS{
    private:
    int pounds;
    int ounces;
    public:
    POUNDS(int lb,int oz) : pounds(lb), ounces(oz) {}

    friend void addweight(KILOS,POUNDS);
};

void addweight(KILOS kilos, POUNDS pounds) {
    int totalOunces = kilos.kilograms * 1000 * 28 + kilos.grams * 28;
    int totalPounds = totalOunces / 16;

    // Add weights
    double result1 = pounds.pounds + totalPounds;
    double result2 =  pounds.ounces + totalOunces % 16;

    cout << "Total Weight: " << result1 << " pounds and " << result2 << " ounces." << endl;
}

int main(){
    KILOS kilos(2,500);
    POUNDS pounds(3,8);

    addweight(kilos,pounds);  

}