#include <bits/stdc++.h>
using namespace std;

class Shape{
    protected:
        string color;
    public:
        Shape() {
            color = "Unknown";
        }
        Shape(string clr) {
            color = clr;
        }
        void setColor(const string& newColor) {
            color = newColor;
        }
        string getColor() const {
            return color;
        }
        void display() {
            cout << "This is a shape with color: " << color << endl;
        }
};
class Rectangle: public Shape{
    private:
    int width, height;
    public:
    
    Rectangle() : Shape() {
        width = 0;
        height = 0;
    }
    Rectangle(int w, int h) : Shape() {
        width = w;
        height = h;
    }
    Rectangle(int w, int h, string color) : Shape(color) {
        width = w;
        height = h;
    }
    int calculateArea() {
        return width * height;
    }
   
    void display() {
        cout << "This is a rectangle with color: " << color << " with width: "<< width << " and height: " << height << endl;    
    }
 };
class Circle: public Shape{
    private:
    int radius;
    public:
    Circle(int r) : Shape() {
        radius = r;
    }
    Circle(int r, string color) : Shape(color) {
        radius = r;
    }
    int calculateArea() {
        return 3.14 * radius * radius;
    }
   
    void display() {
        cout << "This is a circle with color: " << color << " with radius: "<< radius << endl;    
    }
 };
int main() {
    Rectangle r1(2, 2, "pink");
    Rectangle r2(3, 3);
    cout << "Area1: "<< r1.calculateArea() << endl;
    cout << "Area2: "<< r2.calculateArea() << endl;
    r1.display();
    r2.display();
    r1.setColor("red");
    r2.setColor("magenta");
    r1.display();
    r2.display();
    Circle c1(2, "pink");
    Circle c2(3);
    cout << "Area1: "<< c1.calculateArea() << endl;
    cout << "Area2: "<< c2.calculateArea() << endl;
    c1.display();
    c2.display();
    c1.setColor("red");
    c2.setColor("magenta");
    c1.display();
    c2.display();
}