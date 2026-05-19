#include <iostream>

using namespace std;

class baseClass {
public:
    // Fungsi ini tidak bisa di-override lagi di derivedClass
    virtual void perkenalan() final {
        cout << "Halo saya Function dari base class" << endl;
    }
};

class derivedClass : public baseClass {
public:
    // Menggunakan nama fungsi yang berbeda karena perkenalan() sudah final
    void perkenalan1() {
        cout << "Halo saya Function dari derived Class" << endl;
    }
};

int main() {
    derivedClass a;
    a.perkenalan1();

    return 0;
}