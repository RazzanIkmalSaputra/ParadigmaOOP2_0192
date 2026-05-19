
    void potongAdmin() override {
        if (saldo <= BATAS_BEBAS) {
            saldo -= BIAYA_ADMIN;
            if (saldo < 0) saldo = 0;
        }
   
