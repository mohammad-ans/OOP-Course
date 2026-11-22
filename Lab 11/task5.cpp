#include <iostream>
using namespace std;

class SecretVault{
    private:
    string secretCode = "AlphaOmega";
    protected:
    string passcodeHint = "Starts with G";
    public:
    string vaultName = "Main Vault";
    void displayVaultName() {
        cout << "Vault Name" << vaultName << endl;
    }
    string getsecretCode() {
        return secretCode;
    }
};
class SecuritySystem: public SecretVault{
    public:
    void checkAccess(){
        cout << "Vault Name: " << vaultName << " Passcode hint: " << passcodeHint << " Secret Code: " << getsecretCode() << endl;
    }
    protected:
    void internalCheck() {
        cout << "Passcode Hint: " << passcodeHint << endl;
    }
};

class AlarmSystem: private SecuritySystem{
    public:
    void activateAlarm() {
        cout << "Vault Name: " << vaultName << " Passcode Hint: " << passcodeHint <<endl;
        checkAccess(); 
    }
};
int main() {
    SecuritySystem obj1;
    AlarmSystem obj2;
    obj1.displayVaultName();
    obj1.checkAccess();
    obj2.activateAlarm();
}