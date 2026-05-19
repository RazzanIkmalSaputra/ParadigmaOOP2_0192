

int main() {
    RekeningBank *daftar[4];
    daftar[0] = new RekeningSyariah(8000000);
    daftar[1] = new RekeningKonvensional(1200000);
    daftar[2] = new RekeningPremium(20000000);
    daftar[3] = new RekeningPremium(8000000);

    