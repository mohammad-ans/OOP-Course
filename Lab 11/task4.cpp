#include <iostream>
using namespace std;

class Person{
    protected:
    string name;
    int age;
    public:
    int ac;
    Person(string n, int a) {
        name = n;
        age = a;
        cout << "Person Constructor: " << name << endl;
    }
    static void display() {
        ac++;
        cout << ac << endl;
    } 
};
class Student: public Person{
    protected:
    string studentID;
    public:
    Student(string n, int a, string id) : Person(n, a) {
        studentID = id;
        cout << "Student constructor: " << name << endl;
    }
    
};
class Professor: public Person{
    protected:
    string department;
    public:
    Professor(string n, int a, string dept) : Person(n, a) {
        department = dept;
        cout << "Professor constructor: " << name << endl;
    }
};
class PhDStudent: public Student{
    protected:
    string researchTopic;
    public:
    PhDStudent(string n, int a, string id, string topic) : Student(n, a, id){
        researchTopic = topic;
        cout << "PhDStudent constructor: " << name << endl;
    }
};
int main() {
    Student obj1("Ali", 18, "BSEFM5");
    PhDStudent obj2("Ahmed", 18, "BSEFM5", "Algorithms");
    Professor obj3("Arslan", 18, "Computer");
    Person obj("hi", 10);
    obj.display();
    obj.display();
    Person::display();
    // obj.ac = 10;
    cout << obj.ac;
    //parent class constructor is called first
}