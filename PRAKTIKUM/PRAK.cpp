

class RekeningPremium : public RekeningBank {
public:
    static const long long BATAS_BEBAS = 10000000;
    static const long long BIAYA_ADMIN = 50000;
    RekeningPremium(long long awalSaldo) : RekeningBank(awalSaldo) {}
   