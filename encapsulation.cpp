

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
