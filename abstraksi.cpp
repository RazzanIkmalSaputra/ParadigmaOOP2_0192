#include <iostream>
#include <string>

using namespace std;

class AbstraksiKlas {
private:
    string x, y;

public: 
    // Method untuk mengisi nilai private member
    void setXY(string a, string b) {
        x = a;
        y = b;
    }

    // Method untuk menampilkan nilai
    void display() {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};

