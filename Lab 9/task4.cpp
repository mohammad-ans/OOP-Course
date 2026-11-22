#include <bits/stdc++.h>
using namespace std;

class Base {
    public:
    int pub = 1;
    protected:
    
    int prot = 2;
    private:
    int priv = 3;
    };

    class PublicDerived : public Base {
        public:
        void show() { cout << pub << " " << prot << endl; /* Can we access priv
        here? Why? */ }
    };
    class ProtectedDerived : protected Base {
        public:
        void show() {cout << pub << " " << prot << endl; }
    };
    class PrivateDerived : private Base {
        public:
        void show() {cout << pub << " " << prot << endl; }
    };

int main( ) {
    PublicDerived p1;
    ProtectedDerived p2;
    PrivateDerived p3;
    // cout << p1.pub << p2.pub << p3.pub << endl;
    p1.show();
    p2.show();
    p3.show();
}
