

class derivedClass : public baseClass {
public:
    // Menggunakan nama fungsi yang berbeda karena perkenalan() sudah final
    void perkenalan1() {
        cout << "Halo saya Function dari derived Class" << endl;
    }
};

