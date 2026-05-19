#include <iostream>

using namespace std;

// Class ini tidak bisa dijadikan parent/base class karena menggunakan 'final'
class baseClass final {
public:
    virtual void perkenalan() {
        cout << "Halo saya Function dari base class";
    }
};

