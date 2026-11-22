#include <bits/stdc++.h>
using namespace std;

class Employee{
    protected:
    string name;
    int employeeID;
    public:
    Employee() {
        name = "Unknown";
        employeeID = 0;
    }
    Employee(string n, int e) {
        name = n;
        employeeID = e;
    }
    Employee(string n) {
        name = n;
        employeeID = 0;
    }
    Employee(int e) {
        name = "Unknown";
        employeeID = e;
    }
    void displayBasicInfo() {
        cout << "The employee's name is " << name << " and employee's id is " << employeeID << endl;
    }
};

class SalariedEmployee: public Employee{
    private:
    int monthlySalary;
    public:
    SalariedEmployee(int s) : Employee() {
        monthlySalary = s;
    }
    SalariedEmployee(int s, string name, int id) : Employee(name, id) {
        monthlySalary = s;
    }
    SalariedEmployee() : Employee() {
        monthlySalary = 0;
    }
    int calculateAnnualSalary() {
        return monthlySalary * 12;
    }
    void displayBasicInfo() {
        cout << "The employee's name is " << name << " and employee's id is " << employeeID << " and its monthly salary is "<< monthlySalary << endl;
    }
};

class HourlyEmployee: public Employee{
    private:
    double hourlyRate;
    double hoursWorked;
    public:
    HourlyEmployee(int s, int h) : Employee() {
        hourlyRate = s;
        hoursWorked = h;
    }
    HourlyEmployee(int s, int h, string name, int id) : Employee(name, id) {
        hourlyRate = s;
        hoursWorked = h;
    }
    HourlyEmployee() : Employee() {
        hourlyRate = 0;
        hoursWorked = 0;
    }
    int calculateWeeklyPay() {
        return hourlyRate * hoursWorked;
    }
    void displayBasicInfo() {
        cout << "The employee's name is " << name << " and employee's id is " << employeeID << " and its hourly rate is "<< hourlyRate << " and it worked " << hoursWorked << " hours\n";
    }
};

int main() {
    SalariedEmployee s1(10000);
    SalariedEmployee s2(10000, "Ali", 1);
    cout << "Annual salary of s1 is " << s1.calculateAnnualSalary() << endl;
    s1.displayBasicInfo();
    s2.displayBasicInfo();
    HourlyEmployee h1(100, 100);
    HourlyEmployee h2(10, 80,  "Ali", 1);
    cout << "Weekly pay of h1 is " << h1.calculateWeeklyPay() << endl;
    h1.displayBasicInfo();
    h2.displayBasicInfo();

}