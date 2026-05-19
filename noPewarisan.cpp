#include <iostream>

using namespace std;

// Class ini tidak bisa dijadikan parent/base class karena menggunakan 'final'
class baseClass final {
public:
    virtual void perkenalan() {
        cout << "Halo saya Function dari base class";
    }
};

class baseClass1 {
public:
    virtual void perkenalan() {
        cout << "Halo saya Function dari base class" << endl;
    }
};

class derivedClass : public baseClass1 {
public:
    void perkenalan() override {
        cout << "Halo saya Function dari derived Class" << endl;
    }
};

int main() {
    derivedClass a;
    a.perkenalan();

    return 0;
}