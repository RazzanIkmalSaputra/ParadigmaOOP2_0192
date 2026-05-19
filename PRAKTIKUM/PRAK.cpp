
    void potongAdmin() override {
        saldo -= BIAYA_ADMIN;
        if (saldo < 0) saldo = 0;
    }
   