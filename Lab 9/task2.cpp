#include <bits/stdc++.h>
using namespace std;

class Vehicle{
    protected:
    string model;
    public:
    Vehicle() {
        model = "Unknown";
    }
    Vehicle(string m) {
        model = m;
    }
    void displayModel() {
        cout << "The vehicle's model is " << model << endl;
    }
};
class Car: public Vehicle{
    private:
    int numberOfDoors;
    public:
    Car(int d, string m) : Vehicle(m) {
        numberOfDoors = d;
    }
    Car(string m) : Vehicle(m) {
        numberOfDoors = 4;
    }
    Car(int d) : Vehicle() {
        numberOfDoors = d;
    }
    Car() : Vehicle() {
        numberOfDoors = 4;
    }
    void displayDetails() {
        cout << "The car has " << numberOfDoors << " doors and its model is " << model << endl;
    }
};
class Motorcycle: public Vehicle{
    private:
    bool hasSideCar;
    public:
    Motorcycle(bool d, string m) : Vehicle(m) {
        hasSideCar = d;
    }
    Motorcycle(string m) : Vehicle(m) {
        hasSideCar = false;
    }
    Motorcycle(bool d) : Vehicle() {
        hasSideCar = d;
    }
    Motorcycle() : Vehicle() {
        hasSideCar = false;
    }
    void displayDetails() {
        if (hasSideCar)
            cout << "The bike has a Side Car and its model is " << model << endl;
        else
            cout << "The bike does has a Side Car and its model is " << model << endl;
    }
};

int main() {
    Car c1(2, "2025");
    Car c2("2024");
    c1.displayModel();
    c2.displayModel();
    c1.displayDetails();
    c2.displayDetails();
    Motorcycle m1(true);
    Motorcycle m2;
    m1.displayModel();
    m2.displayModel();
    m1.displayDetails();
    m2.displayDetails();
}