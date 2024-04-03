#include<iostream>
using namespace std;

class DB;
class DM{
    int meters;
    int centimeters;
    public:
    void getdis() {
        cout<<"Enter distance in meters: ";
        cin>>meters;
        cout<<"Enter distance in centimeters: ";
        cin>>centimeters;
    }

    friend void addDistance(DM, DB);

};

class DB{
    int feet;
    int inches;
    public:
    void getdis() {
        cout<<"Enter distance in feet: ";
        cin>>feet;
        cout<<"Enter distance in inches: ";
        cin>>inches;
    }
    friend void addDistance(DM, DB);

};

void addDistance(DM Obj1, DB Obj2) {

    // Convert DB to DM (1 foot = 0.3048 meters, 1 inch = 0.0254 meters)
    float dbInMeters = Obj2.feet * 0.3048 + Obj2.inches * 0.0254;

    // Add the distances and convert to meters
    float totalMeters = Obj1.meters + dbInMeters;

    //Convert the distance in centimeters 
    float totalCentimeters = dbInMeters/100+ Obj1.centimeters;
    

    cout << "Total distance: " << totalMeters << " meters and " << totalCentimeters << " centimeters." << endl;
}

int main() {
    DM dmObj;
    DB dbObj;

    cout << "Enter distances for DM object:" << endl;
    dmObj.getdis();

    cout << "\nEnter distances for DB object:" << endl;
    dbObj.getdis();

    // Add DM object to DB object using friend function
    addDistance(dmObj, dbObj);

    return 0;
}
