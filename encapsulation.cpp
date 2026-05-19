#include <iostream>
#include <string>

using namespace std;

class remoteLampu {
private:
    string saklarNo[10];

public:
    void setSaklarNo(int i, string value) {
        if (i >= 0 && i < 10) {
            saklarNo[i] = value;
        }
    }

    string getSaklarNo(int i) {
        if (i >= 0 && i < 10) {
            return saklarNo[i];
        }
        return "Index di luar jangkauan";
    }
};

int main() {
    remoteLampu lampuRumah;

    lampuRumah.setSaklarNo(0, "Lampu Teras Rumah");
    lampuRumah.setSaklarNo(1, "Lampu Ruang Tamu");
    lampuRumah.setSaklarNo(2, "Lampu Kamar Tidur");
    lampuRumah.setSaklarNo(3, "Lampu Dapur");

    cout << lampuRumah.getSaklarNo(0) << endl;
    cout << lampuRumah.getSaklarNo(1) << endl;
    cout << lampuRumah.getSaklarNo(2) << endl;
    cout << lampuRumah.getSaklarNo(3) << endl;

    return 0;
}