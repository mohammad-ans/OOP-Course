#include <iostream>
using namespace std;

class ElectronicDevice{
    protected:
    string powerSource;
    public:
    ElectronicDevice() {
        powerSource = "NA";
    }
    ElectronicDevice(string ps) {
        powerSource = ps;
    }
    void powerOn() {
        cout << "Device powering on...\n";
    }
    void powerOff() {
        cout << "Device powering off...\n";
    }
};
class SmartDevice: public ElectronicDevice{
    protected:
    string connectionType;
    bool isConnected;
    public:
    SmartDevice() : ElectronicDevice() {
        connectionType = "NA";
        isConnected = false;
    }
    SmartDevice(string ps, string type, bool connection) : ElectronicDevice(ps) {
        connectionType = type;
        isConnected = connection;
    }
    void connect() {
        cout << "Attempting to connect via " << connectionType << "...\n";
        isConnected = true;
    }
    void disconnect() {
        cout << "Disconnecting from " << connectionType << "...\n";
        isConnected = false;
    }
};
class SmartLight: public SmartDevice{
    private:
    int brightnessLevel;
    string colorHex;
    public:
    SmartLight(): SmartDevice() {
        brightnessLevel = 50;
        colorHex = "#FFFFFF";
    }
    SmartLight(string ps, string type, bool connection, int level, string hex): SmartDevice(ps, type, connection) {
        brightnessLevel = level;
        colorHex = hex;
    }
    void setBrightness(int level) {
        if (level >= 0 && level <= 100)
            brightnessLevel = level;
        else
            cout << "Not Set because valid range is (0-100).\n";
    }
    void setColor(string hex) {
        colorHex = hex;
    }
    void displayLightStatus() {
        cout << "Power Source: " << powerSource << "  connectionType: " << connectionType << endl;
        if (isConnected)
            cout << "It is connected\n";
        else    
            cout << "It is not connectedn\n";
        cout << "The light's brightness level is " << brightnessLevel << " and its color is " << colorHex << ".\n";
    }
}; 

int main() {
    SmartLight obj1;
    SmartLight obj2("Battery", "WIFI", true, 80, "#FF");
    obj1.powerOn();
    obj1.connect();
    obj1.setBrightness(90);
    obj1.displayLightStatus();
    obj1.disconnect();
    obj1.powerOff();
    obj2.powerOn();
    obj2.connect();
    obj2.setBrightness(90);
    obj2.displayLightStatus();
    obj2.disconnect();
    obj2.powerOff();

}