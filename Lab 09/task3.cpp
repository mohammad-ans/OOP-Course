#include <iostream>
using namespace std;

class Person{
    public:
    string name;
    int ID;
    Person() {
        name = "NA";
        ID = 0;
    }
    Person(string n, int i) {
        name = n;
        ID = i;
    }
    void display() {
        cout << "This person's name is " << name << " and id is " << ID << ".\n";
    }
};
class WorkLocation{
    public:
    string location;
    WorkLocation() {
        location = "NA";
    }
    WorkLocation(string loc) {
        location = loc;
    }
    void displayLocation() {
        cout << "This employee works at location : " << location << endl;
    }
};
class Developer: public Person, public WorkLocation{
    public: 
    string language;
    Developer() : Person(),  WorkLocation( ) {
        language = "C++";
    }
    Developer(string lang, string n, int id, string loc) : Person(n, id), WorkLocation(loc) {
        language = lang;
    }
    void display() {
        cout << name << " is a developer with id " << ID << ". This developer's preferred programming language is " << language << ". ";
        displayLocation();
    }
};
class Manager: public Person, public WorkLocation{
    public:
    string department;
    Manager() : Person(),  WorkLocation( ) {
        department = "C++";
    }
    Manager(string dep, string n, int id, string loc) : Person(n, id), WorkLocation(loc) {
        department = dep;
    }
    void display() {
        cout << name << " is a manager with id " << ID << ". This manager's department is "<< department << ". ";
        displayLocation();
    }
};

int main() {
    Developer obj1("Java", "Ali", 8, "Gulberg");
    Manager obj2("Java", "Ali", 8, "Gulberg");
    obj1.display();
    obj2.display();
}