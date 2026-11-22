#include <iostream>
using namespace std;

class EnginePowered{
    protected:
    int horsepower;
    int common;
    public:
    EnginePowered() {
        horsepower = 0;
    }
    EnginePowered(int hp) {
        horsepower = hp;
    }
    void startEngine() {
        cout << "Engine " << horsepower << "HP started.\n";
    }
    void stopEngine() {
        cout << "Engine stopped.\n";
    }
};
class HumanPowered{
    protected:
    int pedalGears;
    int common;
    public:
    HumanPowered(int gears) {
        pedalGears = gears;
    }
    HumanPowered() {
        pedalGears = 0;
    }
    void startPedaling() {
        cout << "Pedaling with " << pedalGears << " gears.\n";
    }
    void stopPedaling() {
        cout << "Stopped pedaling\n";
    }
};

class ElectricBike: public EnginePowered,public HumanPowered{
    private:
    int batteryRangeKm;
    public:
    ElectricBike() : EnginePowered(), HumanPowered() {
        batteryRangeKm = 0;
    }
    ElectricBike(int hp, int gears, int range) : EnginePowered(hp), HumanPowered(gears) {
        batteryRangeKm = range;
    }
    void displayBikeStatus() {
        cout << "Horsepower: " << horsepower << " Pedal Gears: " << pedalGears << " Battery range in KM: " << batteryRangeKm << endl;
        //cout << common;
        //We could have solved this problem with scope resolution operator by specifying the class from which we want to use the common item or virtually inherited.
    }
    void ride(bool useEngine) {
        if (useEngine)
            startEngine();
        else
            startPedaling();
    }
};
int main() {
    ElectricBike obj1;
    ElectricBike obj2(1000, 5, 10000);
    obj1.displayBikeStatus();
    obj1.ride(true);
    obj1.stopEngine();
    obj1.ride(false);
    obj1.stopPedaling();
    obj2.displayBikeStatus();
    obj2.ride(true);
    obj2.stopEngine();
    obj2.ride(false);
    obj2.stopPedaling();


}