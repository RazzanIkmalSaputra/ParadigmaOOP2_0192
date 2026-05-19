#include <iostream>

using namespace std;

class seseorang {
public:
    // Pure virtual function (membuat class ini menjadi Abstract Class)
    virtual void pesan() = 0; 
};

class joko : public seseorang {
public:
    void pesan() override {
        cout << "Pesan dari joko" << endl;
    }
};

class lia : public seseorang {
public:
    void pesan() override {
        cout << "Pesan dari lia" << endl;
    }
};

int main() {
    seseorang* obyek;
    joko a;
    lia b;

    // Menunjuk ke objek joko
    obyek = &a;
    obyek->pesan();

    // Menunjuk ke objek lia
    obyek = &b;
    obyek->pesan();

    return 0;
}