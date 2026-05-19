

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