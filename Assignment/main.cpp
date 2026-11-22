#include <iostream>
using namespace std;

class GUIElement{
public:
    virtual void draw() {
        cout << "Drawing GUI element" << endl;
    }
    virtual ~GUIElement() {}
};

class Button : public GUIElement {
public:
    void draw(){
        cout << "[Button] Click me!" << endl;
    }
};

class Label : public GUIElement {
public:
    void draw(){
        cout << "[Label] Welcome to the App" << endl;
    }
};

class Checkbox : public GUIElement {
private:
    bool checked;
public:
    Checkbox(bool state = false) {
        checked = state;
    }

    void draw(){
        cout << "[Checkbox] ";
        if (checked){
            cout << "[X]";
        }
        else
            cout << "[ ]";
        cout << " Accept terms and conditions" << endl;
    }
};

class GUIManager {
private:
    GUIElement** elements;
    int capacity;
    int count;

public:
    GUIManager(int cap) : capacity(cap), count(0) {
        elements = new GUIElement*[capacity];
    }

    void addElement(GUIElement* element) {
        if (count < capacity) {
            elements[count++] = element;
        } else {
            cout << "No more space to add UI elements!" << endl;
        }
    }

    void render() {
        cout << "Rendering UI Elements...\n";
        for (int i = 0; i < count; ++i) {
            elements[i]->draw();
        }
    }

    ~GUIManager() {
        for (int i = 0; i < count; ++i) {
            delete elements[i];
        }
        delete[] elements;
    }
};

int main() {
    GUIManager manager(5);

    manager.addElement(new Button());
    manager.addElement(new Label());
    manager.addElement(new Checkbox(false));
    manager.addElement(new Checkbox(true));

    manager.render();

    return 0;
}