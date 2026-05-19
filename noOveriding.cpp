#include <iostream>

using namespace std;

class baseClass {
public:
    // Fungsi ini tidak bisa di-override lagi di derivedClass
    virtual void perkenalan() final {
        cout << "Halo saya Function dari base class" << endl;
    }
};

